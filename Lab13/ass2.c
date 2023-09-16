/*
This program will Compute the sum of the following geometric progression with recursion:
1 + r + r² + … + rⁿ (read the values of r and n from user)
*/

#include<stdio.h>

int powr(int a, int b);
int powsumr(int x, int y);

int main()
{
    int r, n;

    printf("\nThis program will calculate the sum of the series 1 + r + r² + … + rⁿ .\n");

    printf("\nPlease enter the value of r: ");
    scanf("%d", &r);

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of the series is = %d\n\n", powsumr(r, n));

    return 0;
}

int powr(int a, int b)
{
    if (b==0)
    {
        return 1;
    }
    else
    {
        return a * powr(a, b-1);
    }
}

int powsumr(int x, int y)
{
    if (y==0)
    {
        return 1;
    }
    else
    {
        return powr(x, y) + powsumr(x, y-1);
    }
}