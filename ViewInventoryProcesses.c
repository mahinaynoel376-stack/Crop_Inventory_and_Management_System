#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Crop {
    int ID;
    char name[30];
    float quantity; // Standardized to float for Acres/KG
    int storageMode;
    int h_year, h_month, h_day;
    int s_year, s_month, s_day;
};

typedef struct {
    char name[30];
    int shelfLifeRoom;
    int shelfLifeRef;
    int growthDays;
} CropTemplate;

struct Crop inventory[100];
int inventoryCount = 0;

CropTemplate predefinedCrops[] = {
    {"Cabbage", 14, 60, 85},
    {"Chinese Cabbage", 4, 14, 65},
    {"Carrots", 5, 28, 75},
    {"Potatoes", 35, 35, 100},
    {"Bell Pepper", 3, 14, 90},
    {"Lettuce", 2, 10, 45},
    {"Broccoli", 2, 5, 75},
    {"Cauliflower", 4, 14, 80},
    {"Chayote", 7, 28, 120},
    {"Celery", 3, 14, 100},
    {"Pechay", 2, 5, 30},
    {"Leeks", 5, 14, 90},
    {"Snap Beans", 3, 5, 60},
    {"Strawberries", 2, 7, 110},
    {"Sweet Corn", 1, 3, 75},
    {"Tomatoes", 5, 14, 80},
    {"Cucumber", 3, 14, 60},
    {"Banana", 14, 14, 365}
};

int totalTemplates = 18;

// Logic for calculating expiry based on shelf life
void calculateExpiry(struct Crop *n, int life) {
    n->s_day = n->h_day + life;
    n->s_month = n->h_month;
    n->s_year = n->h_year;

    while (1) {
        int limit = 30;
        int m = n->s_month;

        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) limit = 31;
        else if (m == 2) {
            if (n->s_year % 4 == 0) limit = 29;
            else limit = 28;
        }

        if (n->s_day <= limit) break;

        n->s_day -= limit;
        n->s_month++;

        if (n->s_month > 12) {
            n->s_month = 1;
            n->s_year++;
        }
    }
}

// Fixed loadData to use %f for quantity
void loadData(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_crop_database.txt", currentUser);

    FILE *f = fopen(fileName, "r");
    inventoryCount = 0;
    if (f == NULL) return;

    // Added %f to match the float quantity in struct
    while (inventoryCount < 100 && fscanf(f, " %d,%29[^,],%f,%d,%d/%d/%d,%d/%d/%d",
           &inventory[inventoryCount].ID, inventory[inventoryCount].name,
           &inventory[inventoryCount].quantity, &inventory[inventoryCount].storageMode,
           &inventory[inventoryCount].h_year, &inventory[inventoryCount].h_month, &inventory[inventoryCount].h_day,
           &inventory[inventoryCount].s_year, &inventory[inventoryCount].s_month, &inventory[inventoryCount].s_day) == 10) {
        inventoryCount++;
    }
    fclose(f);
}

// Fixed addCrop formatting
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

    printf("Storage: 1. Room Temp  2. Refrigerated: ");
    scanf("%d", &mode);
    n.storageMode = mode;

    int shelfLife = (mode == 2) ? predefinedCrops[idx].shelfLifeRef : predefinedCrops[idx].shelfLifeRoom;

    printf("Quantity (kg): ");
    scanf("%f", &n.quantity); // Fixed: using %f for float
    printf("Harvest Date (YYYY MM DD): ");
    scanf("%d %d %d", &n.h_year, &n.h_month, &n.h_day);

    calculateExpiry(&n, shelfLife);

    char fileName[100];
    sprintf(fileName, "Database/%s_crop_database.txt", currentUser);

    FILE *f = fopen(fileName, "a");
    if (f) {
        // Fixed: Saving with %f for quantity
        fprintf(f, "%d,%s,%.2f,%d,%04d/%02d/%02d,%04d/%02d/%02d\n",
                n.ID, n.name, n.quantity, n.storageMode, n.h_year, n.h_month, n.h_day, n.s_year, n.s_month, n.s_day);
        fclose(f);
        system("cls");
        printf("\n[SUCCESS] %s added. ID: %d. Expires: %02d/%02d/%d\n", n.name, n.ID, n.s_month, n.s_day, n.s_year);
    }
}

// Visual layout fix for List
void displayProductList(char currentUser[]){
    loadData(currentUser);
    printf("\n%-5s %-15s %-8s %-10s %-12s %-12s\n", "ID", "Name", "Qty", "Mode", "Harvest", "Expiry");
    printf("-------------------------------------------------------------------------\n");
    for (int i = 0; i < inventoryCount; i++) {
        printf("%-5d %-15s %-8.2f %-10s %02d/%02d/%d   %02d/%02d/%d\n",
               inventory[i].ID, inventory[i].name, inventory[i].quantity,
               (inventory[i].storageMode == 2 ? "Ref" : "Room"),
               inventory[i].h_month, inventory[i].h_day, inventory[i].h_year,
               inventory[i].s_month, inventory[i].s_day, inventory[i].s_year);
    }
}

// Fixed updateCrop to use correct variable names
void updateCrop(char currentUser[]) {
    int targetID, found = 0;
    printf("\nEnter the ID of the crop you want to UPDATE: ");
    scanf("%d", &targetID);

    for (int i = 0; i < inventoryCount; i++) {
        if (inventory[i].ID == targetID) {
            found = 1;
            int updateChoice;
            printf("\n------------------- Updating %s (ID: %d) -------------------\n\n", inventory[i].name, targetID);
            printf("1. Update Quantity\n");
            printf("2. Update Storage Mode\n");
            printf("3. Update Harvest Date\n");
            printf("4. Cancel\n\n");
            printf("Choice: ");
            scanf("%d", &updateChoice);

            switch (updateChoice) {
                case 1:
                    printf("Current Qty: %.2f. New Quantity (kg): ", inventory[i].quantity);
                    scanf("%f", &inventory[i].quantity); // Fixed variable name and %f
                    break;
                case 2:
                    printf("Current Mode: %s. New Mode (1. Room, 2. Ref): ",
                           (inventory[i].storageMode == 2 ? "Ref" : "Room"));
                    scanf("%d", &inventory[i].storageMode);
                    break;
                case 3:
                    printf("Current Harvest: %04d/%02d/%02d. New Date (YYYY MM DD): ",
                           inventory[i].h_year, inventory[i].h_month, inventory[i].h_day);
                    scanf("%d %d %d", &inventory[i].h_year, &inventory[i].h_month, &inventory[i].h_day);
                    break;
                default:
                    printf("Update cancelled.\n");
                    return;
            }

            // Re-calculate expiry if mode or date changed
            for(int j=0; j < totalTemplates; j++) {
                if(strcmp(inventory[i].name, predefinedCrops[j].name) == 0) {
                    int life = (inventory[i].storageMode == 2) ?
                               predefinedCrops[j].shelfLifeRef : predefinedCrops[j].shelfLifeRoom;
                    calculateExpiry(&inventory[i], life);
                    break;
                }
            }
            break;
        }
    }

    if (found) {
        char fileName[100];
        sprintf(fileName, "Database/%s_crop_database.txt", currentUser);
        FILE *f = fopen(fileName, "w");
        for (int i = 0; i < inventoryCount; i++) {
            fprintf(f, "%d,%s,%.2f,%d,%04d/%02d/%02d,%04d/%02d/%02d\n",
                    inventory[i].ID, inventory[i].name, inventory[i].quantity, inventory[i].storageMode,
                    inventory[i].h_year, inventory[i].h_month, inventory[i].h_day,
                    inventory[i].s_year, inventory[i].s_month, inventory[i].s_day);
        }
        fclose(f);
        system("cls");
        printf("\n[SUCCESS] Inventory has been updated!\n");
    } else {
        printf("\n[ERROR] Crop ID not found.\n");
    }
}

void deleteCrop(char currentUser[]) {
    int targetID, foundIndex = -1;
    printf("\nEnter the ID of the crop you want to DELETE: ");
    scanf("%d", &targetID);

    for (int i = 0; i < inventoryCount; i++) {
        if (inventory[i].ID == targetID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        char fileName[100];
        sprintf(fileName, "Database/%s_crop_database.txt", currentUser);
        FILE *f = fopen(fileName, "w");

        for (int i = 0; i < inventoryCount; i++) {
            if (i == foundIndex) continue;
            fprintf(f, "%d,%s,%.2f,%d,%04d/%02d/%02d,%04d/%02d/%02d\n",
                    inventory[i].ID, inventory[i].name, inventory[i].quantity, inventory[i].storageMode,
                    inventory[i].h_year, inventory[i].h_month, inventory[i].h_day,
                    inventory[i].s_year, inventory[i].s_month, inventory[i].s_year);
        }
        fclose(f);
        system("cls");
        printf("\n[SUCCESS] Crop deleted successfully!\n");
    } else {
        printf("\n[ERROR] ID %d not found.\n", targetID);
    }
}
