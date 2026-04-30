#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "ViewInventoryProcesses.h"
#include "fieldMonitoring.h"

// 1. ADD/PLANT CROP
void addCropToField(char currentUser[]) {
    struct Crop n;
    int choice, timeChoice;
    float acres;

    printf("\n-------------------------- Planting New Crop --------------------------\n\n");
    for (int i = 0; i < totalTemplates; i++) {
        printf("%2d. %-16s %s", i+1, predefinedCrops[i].name, (i+1)%3==0 ? "\n":"");
    }
    printf("\n-----------------------------------------------------------------------\n");
    printf("\nChoice (1-18): ");
    scanf("%d", &choice);
    int idx = choice - 1;
    strcpy(n.name, predefinedCrops[idx].name);

    printf("Total Acres to Plant: ");
    scanf("%f", &acres);
    n.quantity = acres; //

    printf("\nSet Planting Date as:\n1. Today's Date (Automated)\n2. Enter Date Manually\nChoice: ");
    scanf("%d", &timeChoice);

    if (timeChoice == 1) {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        n.h_year = tm.tm_year + 1900;
        n.h_month = tm.tm_mon + 1;
        n.h_day = tm.tm_mday; //
    } else {
        printf("Enter Planting Date (YYYY MM DD): ");
        scanf("%d %d %d", &n.h_year, &n.h_month, &n.h_day);
    }

    // Auto-calculate Harvest Date based on growth periods (e.g., Bananas 9-16 months)
    n.s_year = n.h_year; n.s_month = n.h_month; n.s_day = n.h_day;
    calculateExpiry(&n, predefinedCrops[idx].growthDays);

    char fileName[100];
    sprintf(fileName, "Database/%s_monitoring.txt", currentUser);
    FILE *f = fopen(fileName, "a");
    if (f) {
        // Format: Name, P_Date, H_Date, Status, Acres
        fprintf(f, "%s,%d/%d/%d,%d/%d/%d,0,%.2f\n",
                n.name, n.h_year, n.h_month, n.h_day, n.s_year, n.s_month, n.s_day, n.quantity);
        fclose(f);
        system("cls");
        printf("\n[SUCCESS] %s (%.2f Acres) registered!\n", n.name, n.quantity); //
    }
}

// 2. DISPLAY GRID
void displayFieldGrid(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_monitoring.txt", currentUser);
    FILE *f = fopen(fileName, "r");
    if (!f) { printf("No crops in the field.\n"); return; }

    struct Crop batch[3];
    int count;

    while (1) {
        count = 0;
        // fscanf must match the 8 fields saved in addCropToField
        while (count < 3 && fscanf(f, " %29[^,],%d/%d/%d,%d/%d/%d,%*d,%f",
               batch[count].name, &batch[count].h_year, &batch[count].h_month, &batch[count].h_day,
               &batch[count].s_year, &batch[count].s_month, &batch[count].s_day, &batch[count].quantity) == 8) count++;

        if (count == 0) break;

        for (int i = 0; i < count; i++) {
            printf("%c", 201); for(int j=0; j<21; j++) printf("%c", 205); printf("%c  ", 187);
        }
        printf("\n");

        for (int i = 0; i < count; i++) printf("%c %-19s %c  ", 186, batch[i].name, 186);
        printf("\n");

        for (int i = 0; i < count; i++) printf("%c Size: %-6.2f Acres  %c  ", 186, batch[i].quantity, 186); //
        printf("\n");

        for (int i = 0; i < count; i++) printf("%c P: %02d/%02d/%04d       %c  ", 186, batch[i].h_month, batch[i].h_day, batch[i].h_year, 186);
        printf("\n");

        for (int i = 0; i < count; i++) printf("%c H: %02d/%02d/%04d       %c  ", 186, batch[i].s_month, batch[i].s_day, batch[i].s_year, 186);
        printf("\n");

        for (int i = 0; i < count; i++) {
            printf("%c", 200); for(int j=0; j<21; j++) printf("%c", 205); printf("%c  ", 188);
        }
        printf("\n\n");
    }
    fclose(f);
}

// 3. UPDATE/DELETE ACTIONS
void updateFieldCrop(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_monitoring.txt", currentUser);
    FILE *f = fopen(fileName, "r");
    if (!f) return;

    struct Crop field[100];
    int total = 0;
    while (total < 100 && fscanf(f, " %29[^,],%d/%d/%d,%d/%d/%d,%*d,%f",
           field[total].name, &field[total].h_year, &field[total].h_month, &field[total].h_day,
           &field[total].s_year, &field[total].s_month, &field[total].s_day, &field[total].quantity) == 8) total++;
    fclose(f);

    int target;
    printf("\nEnter Plot Number to update (1-%d): ", total);
    scanf("%d", &target);
    if (target < 1 || target > total) return;
    int idx = target - 1;

    printf("New Planting Date (YYYY MM DD): ");
    scanf("%d %d %d", &field[idx].h_year, &field[idx].h_month, &field[idx].h_day);

    // Recalculate Harvest Date
    for(int i=0; i<totalTemplates; i++) {
        if(strcmp(field[idx].name, predefinedCrops[i].name) == 0) {
            field[idx].s_year = field[idx].h_year;
            field[idx].s_month = field[idx].h_month;
            field[idx].s_day = field[idx].h_day;
            calculateExpiry(&field[idx], predefinedCrops[i].growthDays);
            break;
        }
    }

    f = fopen(fileName, "w");
    for (int i = 0; i < total; i++) {
        fprintf(f, "%s,%d/%d/%d,%d/%d/%d,0,%.2f\n",
                field[i].name, field[i].h_year, field[i].h_month, field[i].h_day,
                field[i].s_year, field[i].s_month, field[i].s_day, field[i].quantity);
    }
    fclose(f);
    system("cls");
    printf("[SUCCESS] Plot %d updated.\n", target);
}

void deleteFieldCrop(char currentUser[]) {
    char fileName[100];
    sprintf(fileName, "Database/%s_monitoring.txt", currentUser);
    FILE *f = fopen(fileName, "r");
    if (!f) return;

    struct Crop field[100];
    int total = 0;
    while (total < 100 && fscanf(f, " %29[^,],%d/%d/%d,%d/%d/%d,%*d,%f",
           field[total].name, &field[total].h_year, &field[total].h_month, &field[total].h_day,
           &field[total].s_year, &field[total].s_month, &field[total].s_day, &field[total].quantity) == 8) total++;
    fclose(f);

    int target;
    printf("\nEnter Plot Number to DELETE (1-%d): ", total);
    scanf("%d", &target);
    if (target < 1 || target > total) return;

    f = fopen(fileName, "w");
    for (int i = 0; i < total; i++) {
        if (i == (target - 1)) continue;
        fprintf(f, "%s,%d/%d/%d,%d/%d/%d,0,%.2f\n",
                field[i].name, field[i].h_year, field[i].h_month, field[i].h_day,
                field[i].s_year, field[i].s_month, field[i].s_day, field[i].quantity);
    }
    fclose(f);
    system("cls");
    printf("[SUCCESS] Plot deleted.\n");
}
