#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "LandingPageProcesses.h"



int main(){
    int lswitch = 1;
    do{
        char loginUsername[50];
        char loginPassword[50];

        systemUpperBar();
        int landingPageMenuChoice = landingPageMenu();
        clearBuffer();
        switch(landingPageMenuChoice){
        case 1:
            registration();
            break;
        case 2:
            char fmenuback;
            int loginfailed = 1;
            do{
                logInInputs(loginUsername,loginPassword);
                int outcome = LoginCheck(loginUsername, loginPassword);

                if (outcome == 1){
                    printf("\nLogged In Successfully!\n\n");
                    systemWelcome();
                    int mainMenuChoice = mainMenu();
                    switch(mainMenuChoice){
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        printf("\nYou have been Signed Out\n\n");
                        break;
                    case 5:
                        printf("\nThank You For Using The System\n");
                        lswitch = 0;
                        break;
                    default:
                        printf("\nError: Invalid Input.\n\n");
                    }
                    loginfailed = 0;
                }
                else{
                    int properinput = 0;
                    printf("\nIncorrect Username or Password, Try Again.\n");
                    do{
                        goBack(&fmenuback, &properinput);
                    } while (properinput == 0);
                    if (fmenuback == 'y' || fmenuback == 'Y'){
                        printf("\n");
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
            printf("\nError: Invalid Input.\n\n");
        }
    }  while(lswitch == 1);

    return 0;
}



