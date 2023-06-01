/*
This program will compute the area of a trapezoid (in cm²).
Necessary inputs will be taken from the user.
*/

#include<stdio.h>

int main()
{
    float para, parb; //The two parallel sides
    float traph; //The height of the trapezoid
    float area;

    printf("\nThis program will compute the area of a trapezoid.");

    printf("\nPlease enter the value of the two parallel sides.\n");
    printf("\nSide a (in cm):");
    scanf("%f", &para);
    printf("Side b (in cm):");
    scanf("%f", &parb);

    printf("Please enter the value of the height (in cm): ");
    scanf("%f", &traph);

    area = ((float)(para+parb)/2)*traph;

    printf("\nThe area of the trapezoid is = %.2fcm²\n\n", area);

    return 0;
}