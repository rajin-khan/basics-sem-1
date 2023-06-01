/*
This program will print a diamond for the number of lines you enter, n.
n must be >= 3, and an odd number.
*/

#include<stdio.h>

int main()
{
    int un, n, n2;

    printf("\nThis program will print a diamond for the number of lines you enter.\n\n");

    printf("Please enter the number of lines (>=3, and an odd number): ");
    scanf("%d", &un);

    n=(un/2)+1;

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int s=i; s<=n-1; s++)
        {
            printf(" ");
        }
        for (int k=1; k<=((2*i)-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    n2 = n-1;

    for (int i=n2; i>=1; i--)
    {
        for (int s=i; s<=n-1; s++)
        {
            printf(" ");
        }
        for (int k=((2*i)-1); k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
