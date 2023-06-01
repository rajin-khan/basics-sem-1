#include<stdio.h>

int main()
{
    float const PI = 3.142;
    float radius;
    float area, circumference, diameter;

    printf("Please enter a radius:");
    scanf("%f", &radius);

    diameter = 2*radius;
    circumference = 2*PI*radius;
    area = PI*radius*radius;

    printf("The diameter is: %.2f\n", diameter);
    printf("The circumference is: %.2f\n", circumference);
    printf("The area is: %.2f\n", area);
    
    return 0;
}