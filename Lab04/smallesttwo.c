//This program will read two numbers from user and print the smaller one from them.

#include<stdio.h>

int main() {
    
    int a, b;

    printf("\nThis program will read two numbers from you and print the smaller one from them.\n");

    printf("\nPlease enter the first number: ");
    scanf("%i", &a);
    printf("\nPlease enter the second number: ");
    scanf("%i", &b);

    if (a<b) {

        printf("\nThe smaller one is: %i\n\n", a);
    }
    else {

        printf("\nThe smaller one is: %i\n\n", b);
    }

    return 0;
}