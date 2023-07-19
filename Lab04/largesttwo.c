//This program will read two numbers from user and print the largest of them

#include<stdio.h>

int main() {

    int a, b;

    printf("\nThis program will read two numbers from you and print the larger one from them.\n");

    printf("\nPlease enter the first number: ");
    scanf("%i", &a);
    printf("\nPlease enter the second number: ");
    scanf("%i", &b);

    if (a>b) {

        printf("\nThe lager one is: %i\n\n", a);
    }
    else {
        
        printf("\nThe lager one is: %i\n\n", b);
    }

    return 0;
}