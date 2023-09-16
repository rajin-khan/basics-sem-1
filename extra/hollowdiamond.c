//This program will print a hollow diamond for the number of lines you enter.

#include <stdio.h>

int main()
{
    int n;

    printf("\nThis program will print a hollow diamond for the number of lines you enter.\n");

    printf("\nPlease enter the number of lines: ");
    scanf("%d",&n);

    printf("\n");

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; j++)
        {
            if ((j==1)||(j==(2*i)-1))
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

    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; j++)
        {
            if ((j==1)||(j==(2*i)-1))
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