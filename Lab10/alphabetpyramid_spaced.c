/*
This program will print the pattern:

    A
   B B
  C C C
 D D D D
E E E E E

for n number of lines
*/

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will a spaced alphabet pyramid.\n");

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
            printf("%c ", 64+i);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}