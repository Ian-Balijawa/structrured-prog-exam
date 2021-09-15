#include <stdio.h>
#include <stdlib.h>

float getIncrement();
float getSum();

double period[6] = {12.1, 12.4, 12.5, 12.7, 13.0, 13.1};
double frequency[6] = {4, 2 , 1, 4, 6, 3};
float sum, add, product, mean;

int main() {

    printf("-----------------------------\n");
    printf("Period(x)\t Frequency(f)\t\n");

    for(int i = 0; i < 6; i++){
    printf("-----------------------------\n");
        printf("\n% .1f \t\t   %.0f \n", period[i], frequency[i]);
    }
    printf("-----------------------------\n");
    printf("\n");

    mean = getSum() / getIncrement();

    printf("THE MEAN IS: %.3f\n",mean);
    
    return 0;
}

float getSum(){
    for (int i = 0; i < 6; i++){
     product = period[i] * frequency[i];
     sum += product;
    }
    return sum;
}

float getIncrement(){
    for(int i = 0; i < 6; i++){
        add += frequency[i];
    }
    return add;
}