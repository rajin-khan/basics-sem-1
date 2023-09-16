//This program will find the sum of the following series using a recursvie function: 1² + 2² + 3² + ... + N²

#include<stdio.h>

int squareseries(int x);

int main()
{
    int n;
    
    printf("\nThis program will find the sum of the following series: 1² + 2² + 3² + ... + n²\n");

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\nThe sum of the series is = %d\n\n", squareseries(n));

    return 0;
}

int squareseries(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return (x*x) + squareseries(x-1);
    }
}