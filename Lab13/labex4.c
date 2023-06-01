//This program will print all natural numbers from n to 1 (i.e., from upper to lower) using recursion.

#include<stdio.h>

void printnat(int x);

int main()
{
    int n;

    printf("\nThis program will print all natural numbers from n to 1.\n");

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\n");

    printnat(n);

    return 0;
}

void printnat(int x)
{
    if (x==1)
    {
        printf("%d\n\n", x);
        return;
    }
    else
    {
        printf("%d, ", x);
        printnat(x-1);
    }
}