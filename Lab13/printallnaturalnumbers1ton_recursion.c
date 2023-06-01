//This program will print all natural numbers from 1 to n using recursion.

#include<stdio.h>

void printnums(int low, int lim)
{
    if (low>lim)
    {
        printf("\b\b \n\n");

        return;
    }
    printf("%d, ", low);

    printnums(low+1, lim);
}

int main()
{
    int n;

    printf("\nThis program will print all the natural numbers up to your number.\n");

    printf("\nPlease enter your number: ");
    scanf("%d", &n);

    printf("\n");

    printnums(1, n);
    
    return 0;
}