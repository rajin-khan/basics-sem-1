//This program will print a hollow parallelogram of size m*n.

#include<stdio.h>

int main()
{
    int m, n;

    printf("\nThis program will print a hollow parallelogram of size m*n.\n\n");

    printf("Please enter the values of: \n");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++) //the loop for printing the leading spaces
        {
            printf(" ");
        }
        for (int k=1; k<=m; k++)
        {
        if ((i==1)||(i==n)||(k==1)||(k==m)) //This condition checks if it is the first column or last, or the first row and last, since that is all the places it needs to print the asterisks
            {
                printf("*");
            }
            else
            {
                printf(" "); //otherwise, a space is printed
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}