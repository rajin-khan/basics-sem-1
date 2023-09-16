/*
This program will use a recursive function to find the inverse product of 1st n natural numbers.
E.g. for n= 5, 
the function should return (1/5) * (1/4) *(1/3) * (1/2) *(1/1) = 1/120 = 0.00833
*/

#include<stdio.h>

float invprod(int x);

int main()
{
    int n;

    printf("\nThis program will find the inverse product of first n natural numbers.\n");

    printf("\nPlease enter n: ");
    scanf("%d", &n);

    printf("\nThe inverse product of first %d natural numbers is = %f\n\n", n, invprod(n));

    return 0;
}

float invprod(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return (1.0/x) * invprod(x-1);
    }
}