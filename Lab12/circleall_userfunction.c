/*
This program will use 3 user-defined functions to compute the 
diameter, circumference and area of a circle whose radius is given by the user as the input.
*/

#include<stdio.h>
#define PI 3.14159265359

int diameter(int x);
float circumference(int x);
float areacirc(int x);

int main()
{
    int rad;

    printf("\nPlease enter the radius of the circle: ");
    scanf("%d", &rad);

    printf("\nThe diameter of the circle is = %d", diameter(rad));

    printf("\nThe circumference of the circle is = %.2f", circumference(rad));

    printf("\nThe area of the circle is = %.2f\n\n", areacirc(rad));

    return 0;
}

int diameter(int x)
{
    int d = 2*x;

    return d;
}

float circumference(int x)
{
    float circ = 2 * PI * x;

    return circ;
}

float areacirc(int x)
{
    float area = PI * (x * x);

    return area;
}