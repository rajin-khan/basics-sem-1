/*
This program will print the pattern:

    0
   01
  010
 0101
01010

for n number of lines
*/

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print a binary right-justified triangle.\n");

    printf("\nPlease enter the number of lines: ");
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
            printf("%d", !(j%2));
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}