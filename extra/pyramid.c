//This program will print an asterisk pyramid for the number of lines you enter.

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print an asterisk pyramid for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++) //loop for printing the number of lines
    {
        for (int s=i; s<=n-1; s++) //loop for the number of spaces, as the number of spaces for each line is the total numbr of rows-1, refer to this video: https://www.youtube.com/watch?v=PYBzYPdtLM8
        {
            printf(" ");
        }
        for (int k=1; k<=((2*i)-1); k++) //loop for the number of asterisks in each line, refer to the vid
        {
            printf("*");
        }
        printf("\n"); //once an iteration is complete, moves to the next line
    }

    printf("\n");

    return 0;
}
