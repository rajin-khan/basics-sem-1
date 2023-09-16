/*
This program will check if an input integer is a multiple of either 2 or 5,
and show if it is a multiple of both.
*/

#include<stdio.h>

int main() {

    int num;

    printf("\nThis program will check if your input integer is a multiple of either 2 or 5 (but not both).\n");
    printf("\nPlease enter your number (make sure it is an integer): ");
    scanf("%i", &num);

    if (num%10==0) {

        printf("\nThe number you've entered is a multiple of both, so it is invalid.\n\n");
    }
    else if (num%2==0) {

        printf("\nThe number you've entered is a multiple of 2.\n\n");
    }
    else if (num%5==0) {

        printf("\nThe number you've entered is a multiple of 5.\n\n");
    }
    else {

        printf("\nThe number you've entered is not a multiple of either.\n\n");
    }

    return 0;
}