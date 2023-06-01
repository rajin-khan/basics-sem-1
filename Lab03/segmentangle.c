/*
This program will find the angle of a segment in a circle.
The arc length and radius will be taken from the user.
*/

#include<stdio.h>
#define PI 3.142

int main()
{
    float arcl; //The arc length
    float rad; //The radius
    float ang; //The angle

    printf("\nThis program will find the angle of a segment in a circle.\nPlease enter the radius:");
    scanf("%f", &rad);
    printf("Please enter the arc length:");
    scanf("%f", &arcl);

    ang = (((float)arcl)/(2*PI*rad))*(360);

    printf("\nThe segment angle is = %.2f\n\n", ang);

    return 0;
}