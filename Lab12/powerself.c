/*
This program will take two integers, a and b as inputs,
and then return the value of aᵇ.

*/

#include<stdio.h>

int userpow(int x, int y);

int main()
{
    int a, b;

    printf("\nThis program will calculate the value of aᵇ.\n");

    printf("\nPlease enter the value of a: ");
    scanf("%d", &a);

    printf("\nPlease enter the value of b: ");
    scanf("%d", &b);

    printf("\n%d to the power %d is = %d\n\n", a, b, userpow(a, b));

    return 0;
}

int userpow(int x, int y)
{
    int term = 1;

    for (int i=1; i<=y; i++)
    {
        term *= x;
    }

    return term;
}