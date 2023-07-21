/*
This program will take the angles of a triangle as an input,
and check whether the triangle is valid or not.
*/

#include<stdio.h>

int main() {

    float a, b, c; //The three angles of the triangle

    printf("\nThis program will check whether a triangle is valid or not.\n");
    printf("\nEnter the values (in degrees) of the three angles:\n");

    printf("\nAngle a = ");
    scanf("%f", &a);
    printf("\nAngle b = ");
    scanf("%f", &b);
    printf("\nAngle c = ");
    scanf("%f", &c);

    if ((a+b+c)==180) {

        printf("\nThe triangle is valid.\n\n");
    }
    else {
        
        printf("\nThe triangle is not valid.\n\n");
    }

    return 0;
}