#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clearBuffer(){
    while ((getchar()) != '\n');
}

struct User{
    char username[50];
    char password[50];
};


int LoginCheck(char *inputusename, char *inputpassword){
    FILE *userDatabase = fopen("userDatabase.txt", "r");
    if (userDatabase == NULL){
        return 0;
    }

    int match = 0;
    struct User Buffer;

    while (fscanf(userDatabase, "%50[^,],%50s\n", Buffer.username, Buffer.password) == 2){

        if (strcmp(inputusename, Buffer.username) == 0 && strcmp(inputpassword,  Buffer.password) == 0){
            printf("\nLog In Successful");
            match = 1;
            break;
        }
    }

    fclose(userDatabase);
    return match;
}

void registration(){
    char username[50], password[50], cpassword[50];
    printf("\nInput Username: ");
    fgets(username, 50, stdin);
    username[strcspn(username, "\n")] = 0;
    int lswitch = 0;

    do {
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
            FILE *Register = fopen("userDatabase.txt", "a+");

            fprintf(Register, "%s,%s\n", username, password);
            printf("\nAccount Registered Successfully.\n ");
            fclose(Register);
            lswitch = 1;
        }

    } while (lswitch == 0);
}
