//This program will print all natural numbers from n to 1 using recursion.

#include<stdio.h>

void printnums(int low, int lim)
{
    if (low==lim)
    {
        printf("%d \n\n", lim);

        return;
    }
    printf("%d, ", lim);

    printnums(low, lim-1);
}

int main()
{
    int n;

    printf("\nThis program will print all the natural numbers from your upper number to your lower number.\n");

    printf("\nPlease enter your number: ");
    scanf("%d", &n);

    printf("\n");

    printnums(1, n);
    
    return 0;
}