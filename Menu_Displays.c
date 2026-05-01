#include <stdio.h>
#include "menu.h"

void systemUpperBar(){
    printf("###################################################\n");
    printf("##                                               ##\n");
    printf("##     Crop Inventory and Manangement System     ##\n");
    printf("##                                               ##\n");
    printf("###################################################\n\n");
}

void systemWelcome(char currentUser[]){
    printf("###################################################\n");
    printf("        Welcome to the system, %s      \n", currentUser);
    printf("###################################################\n");
}

int landingPageMenu(){
    int choice;
    printf("1.) Sign Up\n");
    printf("2.) Log In\n");
    printf("3.) Exit\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}
void systemMainMenu(){
    printf("\n###################################################\n");
    printf("##                                               ##\n");
    printf("##                   Main Menu                   ##\n");
    printf("##                                               ##\n");
    printf("###################################################\n\n");
}

int mainMenu(){
    int choice;
    printf("1.) Crop Cultivation Guide\n");
    printf("2.) View Inventory\n");
    printf("3.) Crop Growth Monitoring\n");
    printf("4.) Sign Out\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}
void systemViewInventory(){
    printf("\n###################################################\n");
    printf("##                Viewing Inventory              ##\n");
    printf("###################################################\n\n");
}

void systemFieldMonitoring(){
    printf("\n###################################################\n");
    printf("##                Field Monitoring               ##\n");
    printf("###################################################\n\n");
}

void systemFieldGrid(){
    printf("\n###################################################\n");
    printf("##                     Fields                    ##\n");
    printf("###################################################\n\n");
}



int viewInventoryMenu(){
    int choice;
    printf("1.) Display Crop/Product List\n");
    printf("2.) Add Product\n");
    printf("3.) Back\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}

int displayProductListMenu(){
    int choice;
    printf("\n1.) Update Crop\n");
    printf("2.) Delete Crop\n");
    printf("3.) Back\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}

int fieldMonitoringMenu(){
    int choice;
    printf("1.) View Field Grid\n");
    printf("2.) Plant New Crop\n");
    printf("3.) Back\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}

int displayFieldGridMenu(){
    int choice;
    printf("\n1.) Update Grid\n");
    printf("2.) Delete Grid\n");
    printf("3.) Back\n\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    return choice;
}



