/*
This program will print the pattern:

    1
   234
  56789
 0123456
789012345

for n number of lines
*/

#include<stdio.h>

int main()
{
    int n, k=1;

    printf("\nThis program will print a number pyramid.\n");

    printf("\nPlease enter the number of lines: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int s=1; s<=n-i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=(2*i)-1; j++)
        {
            if (k>9)
            {
                k = 0;
            }
            printf("%d", k++);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}