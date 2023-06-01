//This program outputs the sum of the series 1²+2²+...+n². The input n is taken from the user.

#include<stdio.h>

int main()
{
    float n;
    float sum;

    printf("\nThis program will find the sum of the series 1²+2²+...+n².");
    printf("\nPlease enter the value of n:");
    scanf("%f",&n);

    sum = (n*((n+1)*((2*n)+1)))/(float)6;

    printf("\nThe sum of the series is = %.2f\n\n",sum);

    return 0;
}