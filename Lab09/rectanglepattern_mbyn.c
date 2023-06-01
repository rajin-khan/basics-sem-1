//This program will print a rectangle pattern of size m*n.

#include<stdio.h>

int main()
{
    int m, n;

    printf("\nThis program will print a rectangle pattern of size m*n.\n\n");

    printf("Please enter the values of\n");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}