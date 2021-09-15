#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define LENGTH 5

void displayMenu();
void displayPassword();


char password[6];
char acceptableChars[11] = {'a','b','c','d','e','f','g','h', '#', '*'};

int main(){

    displayMenu();
    printf("\nEnter a valid Password: ");
    gets(password);
    displayPassword();

    return 0;
}

void displayMenu(){
    printf("\n=================================================================================================");
    printf("\n=======================This is a password validation program====================================");
    printf("\n The password must be strickly 5 characters long");
    printf("\nAccepatble password characters are alphabetical letters a(A) - h(H)");
    printf("\nWild cards # and * are also accepted");

}
void displayPassword(){
    printf("Your password is: ");
    

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%c",password[i]);
    }
}
