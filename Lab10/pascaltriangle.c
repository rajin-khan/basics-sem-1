//This program will print pascal's triangle for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print pascal's triangle for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) //loop for printing the number of lines
    {
        for (int s=1; s<=n-i; s++) //loop for spaces
        {
            printf(" ");
        }
        for (int k=1; k <=i; k++)  //first half of pyramid
        {  
            printf ("%d", k);
        }
        for (int j=i-1; j>=1; j--)  //second half of pyramid, doesn't print the first line, starts from the second as when i=1, i-1 = 0
        {  
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
