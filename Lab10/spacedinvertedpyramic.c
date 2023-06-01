/*
This program will print the pattern:

* * * * * * * * *

  * * * * * * *

    * * * * *
    
      * * *

        *

for n number of lines
*/

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print a spaced asterisk pyramid.\n");

    printf("\nPlease enter the number of lines: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--)
    {
        for (int s=1; s<=n-i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=(2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}