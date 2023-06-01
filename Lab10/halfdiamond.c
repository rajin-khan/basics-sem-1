/*
This program will print the pattern:

*
**
****
*****
****
***
**
*

for n number of lines
*/

#include<stdio.h>

int main()
{
    int n, n2;

    printf("\nThis program will print a vertically half diamond.\n");

    printf("\nPlease enter the number of lines (must be an odd number): ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i=n-1; i>=1; i--)
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

