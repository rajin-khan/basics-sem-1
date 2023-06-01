//This program will print an inverted pascal's triangle for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print an inverted pascal's triangle for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=n; i>=1; i--) //loop for printing the number of lines
    {
        for (int s=1; s<=n-i; s++) //loop for spaces
        {
            printf(" ");
        }
        for (int k=1; k <=i; k++)  //first half of pyramid (right triangle)
        {  
            printf ("%d", k);
        }
        for (int j=i-1; j>=1; j--)  //second half of pyramid, doesn't print the first line of the triangle
        {  
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
