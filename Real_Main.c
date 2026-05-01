#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "CropCultivationGuide.h"
#include "menu.h"
#include "LandingPageProcesses.h"
#include "ViewInventoryProcesses.h"
#include "fieldMonitoring.h"




int main(){
    int lswitch = 1;
    char activeUser[50];
    do{
        char loginUsername[50];
        char loginPassword[50];
        char fmenuback;

        systemUpperBar();
        int landingPageMenuChoice = landingPageMenu();
        clearBuffer();
        switch(landingPageMenuChoice){
        case 1:
            registration();
            break;
        case 2:
            int loginfailed = 1;
            do{
                logInInputs(loginUsername,loginPassword);
                int outcome = LoginCheck(loginUsername, loginPassword);

                if (outcome == 1){
                    system("cls");
                    printf("\n-------------- Logged In Succesfully --------------\n\n");
                    strcpy(activeUser, loginUsername);
                    int mainmenulswitch = 1;
                    systemWelcome(activeUser);
                    do{
                        systemMainMenu();
                        notifications(activeUser);
                        int mainMenuChoice = mainMenu();
                        clearBuffer();
                        switch(mainMenuChoice){
                        case 1:
                            system("cls");
                            cropCultivationGuideMenu();
                            break;
                        case 2:
                            system("cls");
                            int viewinventorymenulswitch = 1;
                            do{
                                systemViewInventory();
                                int viewInventoryMenuChoice = viewInventoryMenu();
                                clearBuffer();
                                switch(viewInventoryMenuChoice){
                                case 1:
                                    system("cls");
                                    int displayProductListlswitch = 1;
                                    do{
                                        displayProductList(activeUser);
                                        int displayPoductListChoice = displayProductListMenu();
                                        switch (displayPoductListChoice){
                                        case 1:
                                            updateCrop(activeUser);
                                            break;
                                        case 2:
                                            deleteCrop(activeUser);
                                            break;
                                        case 3:
                                            displayProductListlswitch = 0;
                                            system("cls");
                                            break;
                                        default:
                                            system("cls");
                                            printf("\nError: Invalid Input.\n");
                                        }
                                    } while (displayProductListlswitch == 1);
                                    break;
                                case 2:
                                    system("cls");
                                    addCrop(activeUser);
                                    break;
                                case 3:
                                    system("cls");
                                    viewinventorymenulswitch = 0;
                                    break;
                                default:
                                    printf("\nError: Invalid Input.\n");
                                }
                            } while (viewinventorymenulswitch == 1);
                            break;
                        case 3:
                            system("cls");
                            int fieldMonitoringlswitch = 1;
                            do{
                                systemFieldMonitoring();
                                int fieldMonitoringChoice = fieldMonitoringMenu();
                                clearBuffer();
                                switch(fieldMonitoringChoice){
                                case 1:
                                    system("cls");
                                    int displayFieldGridlswitch = 1;
                                    do{
                                        systemFieldGrid();
                                        displayFieldGrid(activeUser);
                                        int displayFieldGridChoice = displayFieldGridMenu();
                                        switch (displayFieldGridChoice){
                                        case 1:
                                            updateFieldCrop(activeUser);
                                            break;
                                        case 2:
                                            deleteFieldCrop(activeUser);
                                            break;
                                        case 3:
                                            system("cls");
                                            displayFieldGridlswitch = 0;
                                            break;
                                        default:
                                            printf("\nError: Invalid Input.\n");
                                        }
                                    } while (displayFieldGridlswitch == 1);
                                    break;
                                case 2:
                                    system("cls");
                                    addCropToField(activeUser);
                                    break;
                                case 3:
                                    system("cls");
                                    fieldMonitoringlswitch = 0;
                                    break;
                                default:
                                    printf("\nError: Invalid Input.\n");
                                }
                            } while (fieldMonitoringlswitch == 1);
                            break;
                        case 4:
                            system("cls");
                            printf("\n------------- You have been Signed Out ------------\n\n");
                            mainmenulswitch = 0;
                            break;
                        default:
                            printf("\nError: Invalid Input.\n\n");
                        }
                        loginfailed = 0;
                    } while (mainmenulswitch == 1);
                }
                else{
                    int loginproperinput = 0;
                    printf("\nIncorrect Username or Password, Try Again.\n");
                    do{
                        goBack(&fmenuback, &loginproperinput);
                    } while (loginproperinput == 0);
                    if (fmenuback == 'y' || fmenuback == 'Y'){
                        system("cls");
                        break;
                    }
                }
            } while (loginfailed == 1);
            break;
        case 3:
            printf("\nThank You For Using The System\n");
            lswitch = 0;
            break;
        default:
            system("cls");
            printf("\nError: Invalid Input.\n\n");
        }
    }  while(lswitch == 1);

    return 0;
}



