#include<stdio.h>
#include<stdlib.h>
#include "string.h"

void displayMenu();
int hasUpperCase(char * password);
int hasLowerCase(char * password);
int hasNumber(char * password);
int hasWildCard(char * password);
int isValidPassword(char * password);
int hasAcceptableLength(char * password);
int hasAcceptableLength(char * password);
void reversePassword(char * password);

int main(){

    char password[6];

    displayMenu();




    return 0;
}

void displayMenu(){
    printf("\n=================================================================================================");
    printf("\n=======================This is a password validation program====================================");
    printf("\n The password must be strickly 5 characters long");
    printf("\nAccepatble password characters are alphabetical letters a(A) - h(H)");
    printf("\nWild cards # and * are also accepted");

}
void getPassword(char * password){
    scanf("%s ", password);
}

int hasUpperCase(char * password){

    return 1;
}

int hasLowerCase(char * password){
    return 1;
}

int hasNumber(char * password){
    return 1;
}


int hasWildCard(char * password){

    return 1;
}

int isValidPassword(char * password){

    return 1 || 0;
}

int hasAcceptableLength(char * password){

}

void reversePassword(char * password){
    
}