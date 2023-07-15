//This program outputs the sum of the series 1+2+...+n. The input n is taken from the user.

#include<stdio.h>

int main() {

    float n, sum;

    printf("\nThis program will add all the numbers from 1 to n.");
    
    printf("\nPlease enter the value of n:");
    scanf("%f",&n);

    sum = (n*(n-1))/2;

    printf("\nThe sum of the series is = %.2f\n\n",sum);

    return 0;
}