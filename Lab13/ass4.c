/*
This program will compute the sum of digits of a given number using recursion.
Sample input/output:
Enter an integer: 5431
Sum of digits = 13
*/

#include<stdio.h>

int digsum(int x);

int main()
{
    int n;

    printf("\nThis program will compute the sum of digits of a given number.\n");

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    printf("\nSum of digits = %d\n\n", digsum(n));

    return 0;
}

int digsum(int x)
{
    if (x<10)
    {
        return x;
    }
    else
    {
        return x%10 + digsum(x/10);
    }
}
