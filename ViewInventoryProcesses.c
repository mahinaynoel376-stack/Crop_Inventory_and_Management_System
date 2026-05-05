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
    {"Yellow Corn - OPV", 2, 270, 103},
    {"Hybrid White Corn", 2, 270, 108},
    {"Sweet Corn", 2, 8, 75},
    {"Glutinous Corn", 2, 4, 83},
    {"Rice (Tubigan 18)", 270, 913, 110}, // Room/.., Ref/.., Plant to Harvest Days    {"Rice (Dorado)", 365, 730, 114},
    {"Rice (Dorado)", 270, 270, 114},
    {"Heirloom Rice", 180, 365, 135},
    {"Cabbage (Scorpio F1)", 6, 21, 60},
    {"Cabbage (KK Cross)", 4, 14, 58},
    {"Cabbage (Tropicana F1)", 5, 18, 70},
    {"Potato (Granola)", 11, 75, 83},
    {"Potato (Desiree)", 18, 120, 100},
    {"Potato (Atlantic)", 11, 120, 105},
    {"Potato (Igorota)", 21, 120, 110},
    {"Broccoli (Green Magic F1)", 2, 12, 60},
    {"Broccoli (Chevalier F1)", 2, 18, 80},
    {"‎Broccoli (Marathon F1)", 2, 12, 84},
    {"Cauliflower (Cassius F1)", 2, 18, 75},
    {"Cauliflower (White Flash F1)", 3, 12, 68},
    {"Cauliflower (Snow Crown F1)", 3, 11, 60},
    {"Carrot (Nantes)", 4, 25, 70},
    {"Carrot (Chantenay)", 5, 35, 70},
    {"Carrot (Kuroda)",5, 28, 105},
    {"Bell Pepper (California Wonder)", 3, 10, 78},
    {"Chinese Cabbage (Wong Bok/ Napa)", 3, 21, 68},
    {"Chinese Cabbage (Michichili)", 3, 11, 73},
    {"Lettuce (Iceberg)", 2, 18, 83},
    {"Lettuce (Romaine)", 2, 10, 70},
    {"Lettuce (Loose-leaf)", 1, 8},
    {"Tomato (Diamante Max F1)", 9, 18, 60},
    {"Tomato (Marikit F1)", 6, 12, 65},
    {"Tomato (Roma)", 6, 11, 75},
    {"Eggplant (Pinakbet)", 3, 9, 73},
    {"Eggplant (Violeta F1)", 4, 12, 65},
    {"Bitter Gourd/Ampalaya (Galaxy F1)", 3, 6, 50},
    {"Bitter Gourd/Ampalaya (Sta. Rita [Native Type])", 4, 9, 55},
    {"Sting Beans/Sitaw (Baguio Pole Sitaw", 3, 6, 60},
    {"Sting Beans/Sitaw (Baguio Bush Sitaw", 3, 5, 50},
    {"Mung Bean/Munggo (NSIC Mg 5 [PAGASA 7])", 270, 270, 63},
    {"Mung Bean/Munggo (PAGASA 3 [Local Type])", 270, 270, 63},
};

int totalTemplates = 40;


// Logic for calculating expiry based on shelf life
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
int isGrain(char name[]) {
    if (strstr(name, "Rice") || strstr(name, "Corn") || strstr(name, "Munggo")) return 1;
    return 0;
}
/*
void addCrop(char currentUser[]) {
    struct Crop n;
    int choice, mode;
    loadData(currentUser);

    if (inventoryCount == 0) n.ID = 1001;
    else n.ID = inventory[inventoryCount - 1].ID + 1;

    printf("\n-------------------------- Select Crop --------------------------");
    printf("\n\n          ##Grains##          \n\n");
    for (int i = 0; i < totalTemplates; i++){
            printf("%2d. %-25s %s", i+1, predefinedCrops[i].name, (i+1)%3==0 ? "\n":"");
                if (i == 6){
                    printf("\n\n          ##Vegetables##          \n\n");
                }
    }
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
*/
void addCrop(char currentUser[]) {
    struct Crop n;
    int choice, mode;
    loadData(currentUser);

    if (inventoryCount == 0) n.ID = 1001;
    else n.ID = inventory[inventoryCount - 1].ID + 1;

    printf("\n-------------------------- Select Crop --------------------------\n");
    printf("\n  ## Grains ##\n");
    for (int i = 0; i < totalTemplates; i++) {
        printf("[%2d] %-35s ", i + 1, predefinedCrops[i].name);
        if ((i + 1) % 2 == 0) printf("\n");
        if (i == 6) printf("\n\n  ## Vegetables ##\n");
    }

    do {
        printf("\nChoice (1-%d): ", totalTemplates);
        scanf("%d", &choice);
    } while (choice < 1 || choice > totalTemplates);

    int idx = choice - 1;
    strcpy(n.name, predefinedCrops[idx].name);

    printf("\n[STORAGE SELECTION]\n");
    if (isGrain(n.name)) {
        printf("1.) Fresh (Palay/Ear)\n2.) Dried / Milled\n");
    } else {
        printf("1.) Room Temperature\n2.) Refrigerated\n");
    }

    do {
        printf("Enter Choice: ");
        scanf("%d", &mode);
    } while (mode != 1 && mode != 2);
    n.storageMode = mode;

    int shelfLife = (mode == 2) ? predefinedCrops[idx].shelfLifeRef : predefinedCrops[idx].shelfLifeRoom;

    printf("Quantity (kg): ");
    scanf("%f", &n.quantity);

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
        fprintf(f, "%d,%s,%.2f,%d,%04d/%02d/%02d,%04d/%02d/%02d\n",
                n.ID, n.name, n.quantity, n.storageMode, n.h_year, n.h_month, n.h_day, n.s_year, n.s_month, n.s_day);
        fclose(f);
        printf("\n[SUCCESS] %s added. ID: %d\n", n.name, n.ID);
    }
}


void displayProductList(char currentUser[]){
    loadData(currentUser);
    printf("\n%-5s %-25s %-8s %-10s %-12s %-12s\n", "ID", "Name", "Qty", "Mode", "Harvest", "Expiry");
    printf("----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < inventoryCount; i++) {
        printf("%-5d %-25s %-8.2f %-20s %02d/%02d/%d   %02d/%02d/%d\n",
               inventory[i].ID, inventory[i].name, inventory[i].quantity,
               (inventory[i].storageMode == 2 ? "Ref/Fresh" : "Room/Dried/Milled"),
               inventory[i].h_month, inventory[i].h_day, inventory[i].h_year,
               inventory[i].s_month, inventory[i].s_day, inventory[i].s_year);
    }
    printf("----------------------------------------------------------------------------------------\n");
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
