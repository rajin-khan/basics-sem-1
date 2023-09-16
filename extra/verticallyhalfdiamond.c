//This program will print an half-diamond for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n, n2;

    printf("\nThis program will print a vertically half diamond.\n");

    printf("\nPlease enter the number of lines (must be an odd number): ");
    scanf("%d", &n);

    n2 = n/2+1;

    printf("\n");

    for (int i=1; i<=n2; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i=n2-1; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}