/*
This program will Compute the sum of the following geometric progression without recursion:
1 + r + r² + … + rⁿ (read the values of r and n from user)
*/

#include<stdio.h>

int powseries(int x, int y);

int main()
{
    int r, n;

    printf("\nThis program will calculate the sum of the series 1 + r + r² + … + rⁿ .\n");

    printf("\nPlease enter the value of r: ");
    scanf("%d", &r);

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of the series is = %d\n\n", powseries(r, n));

    return 0;
}

int powseries(int x, int y)
{
    int sum = 1;
    int term = 1;

    for (int i=1; i<=y; i++)
    {
        term *= x;
        sum += term;
    }

    return sum;
}