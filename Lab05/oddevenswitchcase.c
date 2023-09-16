//This program will read a number from a user and print whether it is odd or even. (switch case example)

#include<stdio.h>

int main() {

    int k;

    printf("\nThis program will read a number from you and print whether it is odd or even.\n");

    printf("\nPlease enter the your number: ");
    scanf("%i", &k);

    switch(k%2) {
        
        case 0:
            printf("\nIt is an even number.\n\n");
            break;
        default:
            printf("\nIt is an odd number.\n\n");

    }
    
    return 0;
}