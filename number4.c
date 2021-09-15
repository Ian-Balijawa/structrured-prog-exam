#include<stdio.h>
#include<string.h>

#define LENGTH 5

int hasWildCard();
void validatePassword();
char acceptablechars[] = {'a','b','c','d','e','f','g','h','#','*'};
char password[5];
int VALID = 0;
void displayMenu();
int hasAcceptableLength();

int main(){
    displayMenu();
    gets(password);

    validatePassword();
    
    if(VALID == 1){
        if(hasWildCard() == 1){
            for(int i = LENGTH;i >= 0; --i){
                printf("%c",password[i]);
            }
        }
        else{
            printf("%s",password);
        }
    }
    return 0;
}

void displayMenu(){
    printf("\n========================================================================================================================");
    printf("\n==============================================This is a password VALIDATION program====================================\n");
    printf("\n The password must be strickly 5 characters long\n");
    printf("\nAccepatble password characters are alphabetical letters a(A) - h(H)\n");
    printf("\nWild cards # and * are also accepted\n");
    printf("\nPassword provided with a Wild card # or * will be displayed to in a reversed form\n");
    printf("\nEnter Password(It should be exactly 5 characters): ");
}

void validatePassword(){
    for(int i = 0;i < LENGTH; i++){
            VALID = 0;
        for(int j = 0;j<strlen(acceptablechars);j++){
            if(password[i] == acceptablechars[j]){
                VALID = 1;
            }
        }
        if(VALID == 0){
            printf("\nThe Password you entered is Invalid\n");
            break;
        }
    }
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

int hasAcceptableLength(){
    return strlen(password) == LENGTH ? 1 : 0;
}
