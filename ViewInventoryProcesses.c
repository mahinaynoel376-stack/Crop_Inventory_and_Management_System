#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Crop {
    int ID;
    char name[30];
    int quantity;
    int storageMode; // 1 = Room Temp, 2 = Refrigerated
    int h_year, h_month, h_day;
    int s_year, s_month, s_day;
};

typedef struct {
    char name[30];
    int shelfLifeRoom;
    int shelfLifeRef;
} CropTemplate;

struct Crop inventory[100];
int inventoryCount = 0;


CropTemplate predefinedCrops[] = {
    {"Cabbage", 14, 60}, {"Chinese Cabbage", 4, 14}, {"Carrots", 5, 28},
    {"Potatoes", 35, 35}, {"Bell Pepper", 3, 14}, {"Lettuce", 2, 10},
    {"Broccoli", 2, 5}, {"Cauliflower", 4, 14}, {"Chayote", 7, 28},
    {"Celery", 3, 14}, {"Pechay", 2, 5}, {"Leeks", 5, 14},
    {"Snap Beans", 3, 5}, {"Strawberries", 2, 7}, {"Sweet Corn", 1, 3},
    {"Tomatoes", 5, 14}, {"Cucumber", 3, 14}, {"Banana", 14, 14}
};
int totalTemplates = 18;

void calculateExpiry(struct Crop *n, int life) {
    (*n).s_day = (*n).h_day + life;
    (*n).s_month = (*n).h_month;
    (*n).s_year = (*n).h_year;

    int limit;

    // Use a while loop so it can skip multiple months if 'life' is large
    while (1) {
        limit = 30; // Default
        int m = (*n).s_month;

        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            limit = 31;
        } else if (m == 2) {
            // Basic leap year check: 2024, 2028, etc.
            if ((*n).s_year % 4 == 0) limit = 29;
            else limit = 28;
        }

        // If the day fits in the current month, we are done!
        if ((*n).s_day <= limit) {
            break;
        }

        // Otherwise, subtract the limit and move to the next month
        (*n).s_day -= limit;
        (*n).s_month++;

        // If we go past December, reset to January and increment year
        if ((*n).s_month > 12) {
            (*n).s_month = 1;
            (*n).s_year++;
        }
    }
}

void loadData(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_crop_database.txt", currentUser);

    FILE *f = fopen(fileName, "r");
    inventoryCount = 0;
    if (f == NULL) return;
    while (inventoryCount < 100 && fscanf(f, " %d,%29[^,],%d,%d,%d/%d/%d,%d/%d/%d",
           &inventory[inventoryCount].ID, inventory[inventoryCount].name,
           &inventory[inventoryCount].quantity, &inventory[inventoryCount].storageMode,
           &inventory[inventoryCount].h_year, &inventory[inventoryCount].h_month, &inventory[inventoryCount].h_day,
           &inventory[inventoryCount].s_year, &inventory[inventoryCount].s_month, &inventory[inventoryCount].s_day) == 10) {
        inventoryCount++;
    }
    fclose(f);
}

void addCrop(char currentUser[]) {
    struct Crop n;
    int choice, mode;
    loadData(currentUser);

    if (inventoryCount == 0) n.ID = 1001;
    else n.ID = inventory[inventoryCount - 1].ID + 1;

    printf("\n-------------------------- Select Crop --------------------------\n\n");
    for (int i = 0; i < totalTemplates; i++) printf("%2d. %-16s %s", i+1, predefinedCrops[i].name, (i+1)%3==0 ? "\n":"");
    printf("\n-----------------------------------------------------------------\n");

    printf("\nChoice (1-18): ");
    scanf("%d", &choice);
    int idx = choice - 1;
    strcpy(n.name, predefinedCrops[idx].name);

    printf("Storage: 1.Room Temp  2.Refrigerated: ");
    scanf("%d", &mode);
    n.storageMode = mode;


    int shelfLife = (mode == 2) ? predefinedCrops[idx].shelfLifeRef : predefinedCrops[idx].shelfLifeRoom;

    printf("Quantity (kg): ");
    scanf("%d", &n.quantity);
    printf("Harvest Date (YYYY MM DD): ");
    scanf("%d %d %d", &n.h_year, &n.h_month, &n.h_day);


    calculateExpiry(&n, shelfLife);

    char fileName[100];
    sprintf(fileName, "Database/%s_crop_database.txt", currentUser);

    FILE *f = fopen(fileName, "a");
    if (f) {
        fprintf(f, "%d,%s,%d,%d,%04d/%02d/%02d,%04d/%02d/%02d\n",
                n.ID, n.name, n.quantity, n.storageMode, n.h_year, n.h_month, n.h_day, n.s_year, n.s_month, n.s_day);
        fclose(f);
        system("cls");
        printf("\n[SUCCESS] %s added. ID: %d. Expires: %02d/%02d/%d\n", n.name, n.ID, n.s_month, n.s_day, n.s_year);
    }
}

void displayProductList(char currentUser[]){
    loadData(currentUser);
    printf("\n%-5s %-15s %-5s %-10s %-12s %-12s\n", "ID", "Name", "Qty", "Mode", "Harvest", "Expiry");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < inventoryCount; i++) {
        printf("%-5d %-15s %-5d %-10s %02d/%02d/%d   %02d/%02d/%d\n",
               inventory[i].ID, inventory[i].name, inventory[i].quantity,
               (inventory[i].storageMode == 2 ? "Ref" : "Room"),
               inventory[i].h_month, inventory[i].h_day, inventory[i].h_year,
               inventory[i].s_month, inventory[i].s_day, inventory[i].s_year);
    }
}
