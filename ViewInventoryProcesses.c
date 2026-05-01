#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

struct Crop {
    int ID;
    char name[30];
    float quantity; //float for Acres/KG
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

void loadData(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_crop_database.txt", currentUser);

    FILE *f = fopen(fileName, "r");
    inventoryCount = 0;
    if (f == NULL) return;
    if (f == NULL) return;

    while (inventoryCount < 100 && fscanf(f, " %d,%29[^,],%f,%d,%d/%d/%d,%d/%d/%d",
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

    while(1){
        printf("\nChoice (1-18): ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 18){
            break;
        }
        else{
            printf("\n[Error]: Invalid Choice, please pick from 1 to 18.\n");
        }
    }
    int idx = choice - 1;
    strcpy(n.name, predefinedCrops[idx].name);
    int validchoice = 0;

    printf("\n[STORAGE SELECTION]\n");
    printf("1.) Room Temperature (Standard Shelf Life)\n");
    printf("2.) Refrigerated     (Extended Shelf Life)\n");
    do{
        printf("Enter Choice: ");
        scanf("%d", &mode);
        if (mode == 1 || mode == 2){
            validchoice = 1;
        }
        else{
            printf("[Error]: Invalid Choice, please pick 1 or 2.\n\n");
        }
    } while (validchoice == 0);
    n.storageMode = mode;

    int shelfLife = (mode == 2) ? predefinedCrops[idx].shelfLifeRef : predefinedCrops[idx].shelfLifeRoom;
    while(1){
        printf("\nQuantity (kg): ");
        scanf("%f", &n.quantity);
        if (n.quantity < 0) printf("[Error]: Invalid Quantity\n");
        else{
            break;
        }
    }
    int harvestdatechoice;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    while(1){
        printf("\nSet Harvest Date as:\n1. Today's Date (Automated)\n2. Enter Date Manually\nChoice: ");
        scanf("%d", &harvestdatechoice);

        switch(harvestdatechoice){
            case 1:
                n.h_year = tm.tm_year + 1900;
                n.h_month = tm.tm_mon + 1;
                n.h_day = tm.tm_mday;
                break;
            case 2:
                while(1){
                    printf("\nHarvest Date (YYYY MM DD): ");
                    if (scanf("%d %d %d", &n.h_year, &n.h_month, &n.h_day) != 3) {
                        printf("[ERROR] Invalid format! Please use numbers only (e.g., 2026 05 01).\n");
                        while(getchar() != '\n'); // Clear the "trash" from the input buffer
                        continue;
                    }

                    if (n.h_year < 2000 || n.h_year > 2100) {
                        printf("[ERROR] Year out of range. Please enter a year between 2000 and 2100.");
                    }
                    else if (n.h_month < 1 || n.h_month > 12) {
                        printf("[ERROR] Invalid month! Must be between 01 and 12.");
                    }
                    else {
                        //Logic Check for Days (Account for Leap Years)
                        int daysInMonth = 31;
                        if (n.h_month == 4 || n.h_month == 6 || n.h_month == 9 || n.h_month == 11) {
                            daysInMonth = 30;
                        } else if (n.h_month == 2) {
                            // Leap year logic: divisible by 4 but not 100, unless divisible by 400
                            if ((n.h_year % 4 == 0 && n.h_year % 100 != 0) || (n.h_year % 400 == 0))
                                daysInMonth = 29;
                            else
                                daysInMonth = 28;
                        }

                        if (n.h_day < 1 || n.h_day > daysInMonth) {
                            printf("[ERROR] Day %d does not exist in Month %d of %d.", n.h_day, n.h_month, n.h_year);
                        }
                        else{
                            break;
                        }
                    }
                }
                break;
            default:
                printf("[Error]: Invalid Choice, Please choose 1 or 2.\n");
        }
        if (harvestdatechoice == 1 || harvestdatechoice == 2){
            break;
        }
    }
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
