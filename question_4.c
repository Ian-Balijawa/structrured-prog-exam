#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define LENGTH 5

void displayPassword();
int hasWildCard();
void validatePassword();

char password[6];
char acceptableChars[11] = {'a','b','c','d','e','f','g','h', '#', '*'};

int main(){

    printf("\nEnter a valid Password: ");
    gets(password);
    validatePassword();
    displayPassword();

    return 0;
}



int hasWildCard(){
    for (int i = 0; i < LENGTH; i++) {
        while (password[i] != '\0'){
        if(password[i] == '#' || password[i] == '*')
            return 1;
         else
            return 0;
        }
    }
}

void displayPassword(){
    char reversed [6];

    printf("Your password is: ");
    if(hasWildCard() == 1){
        strcpy(reversed, strrev(password));

        for (int i = 0; i < LENGTH; i++)
        {
            printf("%c",reversed[i]);
        }

    } else
    {
        for (int i = 0; i < LENGTH; i++) {
            printf("%c",password[i]);
        }
        
    }
}

int containsChar(char ch){
    int found = 0;

    for (int i = 0; i < strlen(acceptableChars); i++)
    {
        if(acceptableChars[i] == ch){
            printf("\n%c\n", acceptableChars[i]);
            found = 1;
            break;
        }
    }
    return found;
}

int hasAcceptableChars(){
    int okay = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        okay = containsChar(password[i]);
    }
    return okay;
}

int hasAcceptableLength(){
    return strlen(password) == LENGTH ? 1 : 0;
}

void validatePassword(){
    if(hasAcceptableLength() == 0){
        printf("\nInvalid password.\n It should be strictly 5 characters long");
        return;
    }
    if(hasAcceptableChars() == 0) {
        printf("\nInvalid password.\n It should contain characters a to h and wild cards # and *");
        return;
    }
}
