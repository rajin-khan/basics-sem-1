/*
This program will compute the sum of the following geometric progression,
using a user-defined function with 2 parameters r and n:
1 + r + r² + … + rⁿ (read the values of r and n from user)
*/

#include<stdio.h>

float powersum(int x, int y);

int main()
{
    int r, n;

    printf("\nThis program will calculate the sum of the series 1 + r + r² + … + rⁿ .\n");

    printf("\nPlease enter the value of r: ");
    scanf("%d", &r);

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of the series is = %.2f \n\n", powersum(r, n));

    return 0;
}

float powersum(int x, int y)
{
    float sum = 1; 
    int term = 1;

    for (int i=1; i<=y; i++)
    {
        term *= x;
        sum += term;
    }

    return sum;
}