//This program will print a hollow rhombus of n lines.

#include<stdio.h>

int main()
{
    int m, n;

    printf("\nThis program will print a hollow rhombus of n lines.\n\n");

    printf("Please enter the values of n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=n; j++)
        {
        if ((i==1)||(i==n)||(j==1)||(j==n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}