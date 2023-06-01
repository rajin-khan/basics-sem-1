//This program will convert a given decimal number to its binary equivalent.

#include<stdio.h>

int main()
{
    int n, bin = 0, base = 1, last_dig = 0;

    printf("\nThis program will convert your decimal number to its binary equivalent.\n\n");

    printf("Please enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        last_dig = n%2;
        bin += last_dig*base;
        base *= 10;
        n /= 2;
    }

    printf("%d\n\n", bin);

    return 0;
}