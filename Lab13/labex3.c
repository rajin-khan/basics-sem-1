//This program will compute the value of aᵇ using recursion, where a and b are integers.

#include<stdio.h>

int recurpow(int x, int y);

int main()
{
    int a, b;

    printf("\nThis program will compute the value of aᵇ.\n");

    printf("\nPlease enter the value of a: ");
    scanf("%d", &a);

    printf("\nPlease enter the value of b: ");
    scanf("%d", &b);

    printf("\n%d to the power %d = %d\n\n", a, b, recurpow(a, b));

    return 0;
}

int recurpow(int x, int y)
{
    if (y==0)
    {
        return 1;
    }
    else
    {
        return x * recurpow(x, y-1);
    }
}