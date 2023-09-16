/*
This program that prompts the user to input three integer values,
and find the greatest and smallest of those three values.
*/

#include<stdio.h>

int main() {

    int a, b, c;

    printf("\nThis program will take three numbers from you and calculate the greatest and smallest from them.\n");
    
    printf("\nPlease enter three numbers:\n\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c) {

        printf("\nThe largest one is: %i\n", a);
    }
    else if (b>c) {
        printf("\nThe largest one is: %i\n", b);
    }
    else {

        printf("\nThe largest one is: %i\n", c);
    }

    if (a<b && a<c) {

        printf("\nThe smallest one is: %i\n\n", a);
    }
    else if (b<c) {

        printf("\nThe smallest one is: %i\n\n", b);
    }
    else {
        
        printf("\nThe smallest one is: %i\n\n", c);
    }

    return 0;
}