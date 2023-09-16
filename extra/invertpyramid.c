//This program will print an inverted asterisk pyramid for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print an inverted asterisk pyramid for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=n; i>=1; i--) //loop for printing the number of lines
    {
        for (int s=1; s<=n-i; s++) //loop for spaces
        {
            printf(" ");
        }
        for (int k=((2*i)-1); k>=1; k--) //loop for asterisks
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
