//This program will print a spaced alphabet pyramid for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print a spaced alphabet pyramid for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) 
    {
        for (int s=1; s<=n-i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("%c ", 'A'+(j-1));
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
