/*
This program will take the sides of a triangle as an input,
and check whether the triangle is valid or not.
*/

#include<stdio.h>

int main() {

    float a, b, c; //The three sides of the triangle

    printf("\nThis program will check whether a triangle is valid or not.\n");
    printf("\nEnter the length (in cm) of the three sides:\n");

    printf("\nSide a = ");
    scanf("%f", &a);
    printf("\nSide b = ");
    scanf("%f", &b);
    printf("\nSide c = ");
    scanf("%f", &c);

    if (((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {
        
        printf("\nThe triangle is valid.\n\n");
    }
    else {

        printf("\nThe triangle is not valid.\n\n");
    }

    return 0;
}