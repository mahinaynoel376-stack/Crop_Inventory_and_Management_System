#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ViewInventoryProcesses.h"
#include <conio.h>
#include <time.h>

void clearBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

struct User{
    char username[50];
    char password[50];
};


int LoginCheck(char *inputusename, char *inputpassword){
    FILE *userDatabase = fopen("Database/userDatabase.txt", "r");
    if (userDatabase == NULL){
        return 0;
    }

    int match = 0;
    struct User Buffer;

    while (fscanf(userDatabase, "%50[^,],%50s\n", Buffer.username, Buffer.password) == 2){

        if (strcmp(inputusename, Buffer.username) == 0 && strcmp(inputpassword,  Buffer.password) == 0){
            match = 1;
            break;
        }
    }

    fclose(userDatabase);
    return match;
}

void registration(){
    char username[50], password[50], cpassword[50];

    int lswitch = 1;
    char fmenuback;

    do {
        printf("\nInput Username: ");
        fgets(username, 50, stdin);
        username[strcspn(username, "\n")] = 0;
        printf("Input Password: ");
        fgets(password, 50, stdin);
        password[strcspn(password, "\n")] = 0;
        printf("Confirm Password: ");
        fgets(cpassword, 50, stdin);
        cpassword[strcspn(cpassword, "\n")] = 0;


        if (strcmp(password, cpassword) != 0){
            printf("\nPasswords do not match, try again.\n");
        }
        else {
            FILE *CheckFile = fopen("Database/userDatabase.txt", "r");
            int exists = 0;

            if (CheckFile != NULL){
                char temppassword[50];
                char existingusername[50];

                while (fscanf(CheckFile, " %49[^,],%49s", existingusername, temppassword) == 2){
                    if (strcmp(username, existingusername) == 0){
                        exists = 1;
                        break;
                    }
                }
                fclose(CheckFile);
            }

            if (exists == 1) {
                printf("\nUsername '%s' is already taken! Please try again.\n", username);
                do{
                    printf("\nGo back? (y/n): ");
                    scanf(" %c", &fmenuback);
                    clearBuffer();
                    if (fmenuback == 'y' || fmenuback == 'Y' || fmenuback == 'n' || fmenuback == 'N'){
                        break;
                    }
                    else{
                        printf("\nError: Invalid Input.\n");
                    }
                } while (1);
                if (fmenuback == 'y' || fmenuback == 'Y'){
                    system("cls");
                    lswitch = 0;
                }

            }
            else{
                FILE *Register = fopen("Database/userDatabase.txt", "a+");

                fprintf(Register, "%s,%s\n", username, password);
                system("cls");
                printf("\n--------- Account Registered Successfully ---------\n\n");
                fclose(Register);
                lswitch = 0;
            }
        }

    } while (lswitch == 1);
}

void logInInputs(char *loginUsername, char *loginPassword){
    printf("\nEnter Username: ");
    fgets(loginUsername, 50, stdin);
    loginUsername[strcspn(loginUsername, "\n")] = 0;

    printf("Enter Password: ");
    fgets(loginPassword, 50, stdin);
    loginPassword[strcspn(loginPassword, "\n")] = 0;
}

void goBack(char *fmenuback, int *properinput){
    printf("\nGo back? (y/n): ");
    scanf(" %c", fmenuback);
    clearBuffer();
    if (*fmenuback == 'y' || *fmenuback == 'Y' || *fmenuback == 'n' || *fmenuback == 'N'){
        *properinput = 1;
    }
    else{
        printf("\nError: Invalid Input.\n");
    }
}

void notifications(char currentUser[]){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int curY = tm.tm_year + 1900;
    int curM = tm.tm_mon + 1;
    int curD = tm.tm_mday;

    loadData(currentUser);
    printf("------------------ Notifications ------------------\n\n");
    printf("        \tCurrent Date: %02d/%02d/%d\n\n", curM, curD, curY);

    for (int i = 0; i < inventoryCount; i++) {
        // Check for Expired
        if (inventory[i].s_year < curY ||
           (inventory[i].s_year == curY && inventory[i].s_month < curM) ||
           (inventory[i].s_year == curY && inventory[i].s_month == curM && inventory[i].s_day < curD)) {

            printf("   [!] EXPIRED: %s (ID: %d)\n", inventory[i].name, inventory[i].ID);
        }
        // Check for Urgent (within 2 days)
        else if (inventory[i].s_year == curY && inventory[i].s_month == curM && (inventory[i].s_day - curD <= 2 && inventory[i].s_day - curD >= 0)) {

            printf("   [*] URGENT: %s (ID: %d) expires within 48h!\n", inventory[i].name, inventory[i].ID);
        }
    }
    printf("\n---------------------------------------------------\n\n");
}
