//This program will print a space diamond.

#include <stdio.h>

int main()
{
    int num;

    printf("\nThis program will print a space diamond for the number of lines you enter.\n");
    
    printf("Please enter the number of lines: ");
    scanf("%d",&num);

    for(int i=1; i<=(num/2)+1; i++)
    {
        for(int j=i; j<=(num/2)+1; j++)
        {
            printf("*");
        }

        for(int j=1; j<2*i-1; j++)
        {
                printf(" ");
        }

        for(int j=i; j<=(num/2)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=2; i<=(num/2)+1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        for(int j=2*i-2; j<num-1; j++)
        {
            printf(" ");
        }

        if((num%2==0) && (i<(num/2)+1))
        {
            printf(" ");
        }

        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
     return 0;
}