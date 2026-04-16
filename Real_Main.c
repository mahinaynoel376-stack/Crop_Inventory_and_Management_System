#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "LandingPageProcesses.h"

struct User{
    char username[50];
    char password[50];
};


int main(){
    int lswitch = 1;
    int loginfailed = 1;
    do{
        struct User loginCredentials;
        systemUpperBar();
        int landingPageMenuChoice = logInMenu();
        clearBuffer();
        switch(landingPageMenuChoice){
        case 1:
            registration();
            break;
        case 2:
            do{
                printf("\nEnter Username: ");
                fgets(loginCredentials.username, 50, stdin);
                loginCredentials.username[strcspn(loginCredentials.username, "\n")] = 0;

                printf("Enter Password: ");
                fgets(loginCredentials.password, 50, stdin);
                loginCredentials.password[strcspn(loginCredentials.password, "\n")] = 0;


                int outcome = LoginCheck(loginCredentials.username, loginCredentials.password);

                if (outcome == 1){
                    printf("\nLogged In Successfully!\n");
                    loginfailed = 0;
                }
                else{
                    printf("\nIncorrect Username or Password, Try Again.");
                }
            } while (loginfailed == 1);
            break;
        case 3:

            break;
        default:


        }
    }  while(lswitch == 1);

    return 0;
}





