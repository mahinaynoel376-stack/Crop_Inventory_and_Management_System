#include <stdio.h>
#include "menu.h"

void systemUpperBar(){
    printf("###################################################\n");
    printf("##                                               ##\n");
    printf("##     Crop Inventory and Manangement System     ##\n");
    printf("##                                               ##\n");
    printf("###################################################\n\n");
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

