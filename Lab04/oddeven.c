//This program will read a number from a user and print whether it is odd or even. (if else example)

#include<stdio.h>

int main() {

    int k;

    printf("\nThis program will read a number from you and print whether it is odd or even.\n");

    printf("\nPlease enter the your number: ");
    scanf("%i", &k);

    if ((k%2)==0) {

        printf("\nThe number is even.\n\n");
    }
    else {
        
        printf("\nThe number is odd.\n\n");
    }
    
    return 0;
}