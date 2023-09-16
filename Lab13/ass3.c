/*
This program will find the sum of the following series using recursion:
1/1! + 2/2! + 3/3! + ... N/N!
*/

#include<stdio.h>

float invfactsum(int x);
int fact(int y);

int main()
{
    int n;

    printf("\nThis program will compute the sum of the series: (1/1!) + (2/2!) + (3/3!) + ... + (N/N!).\n\n");

    printf("Please enter a value for n (an integer): ");
    scanf("%d", &n);

    printf("\nThe sum of the series is = %f\n\n", invfactsum(n));

    return 0;
}

float invfactsum(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return ((float)x/fact(x)) + invfactsum(x-1); 
    }
}

int fact(int y)
{
    if (y==1)
    {
        return 1;
    }
    else
    {
        return y * fact(y-1);
    }
}