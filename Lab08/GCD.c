//This program will find the Greatest Common Divisor (GCD) of two given integers.

#include<stdio.h>

int main()
{
    int a, b, max, GCD;

    printf("\nThis program will find the Greatest Common Divisor (GCD) of two numbers (integers) that you enter.\n\n");

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    int i = max = a>b ? a:b;

    for (i=max; i>=1; i--)
    {
        if (((a%i)==0)&&((b%i)==0))
        {
            GCD = i;
            break;
        }
    }

    printf("\nThe GCD is = %d\n\n", GCD);

    return 0;
}