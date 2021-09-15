#include <stdio.h>
#include <stdlib.h>

    
#define NUMBER_OF_PADDOCKS  100;

float smallPaddockArea(int length,int width);

int main(){
    int length = 0;
    int width = 0;
    float smallArea = smallPaddockArea(length, width);

    printf("\nThe area of each small paddock is: %f\n",smallArea);

    int totalAreaOfsmallPaddock = smallArea * NUMBER_OF_PADDOCKS;

    printf("\nTotal number of Paddocks is %d\n",totalAreaOfsmallPaddock);

    return 0;
}


float smallPaddockArea(int length,int width) {
    printf("\nEnter the length of paddock: ");

    scanf("%d",&length);

    printf("\nEnter the width of paddock:");

    scanf("%d", &width);

    return length * width;
}
