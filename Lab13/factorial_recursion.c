//This program will compute the factorial of a number using recursive function.

#include<stdio.h>

int fact(int x)
{
    if ((x==1)||(x==0))
    {
        return 1;
    }
    else if(x<0)
    {
        printf("\nInvalid input. Please enter a positive integer.\n");
        return 0;
    }
    else
    {
        return x * fact(x-1);
    }
}

int main()
{
    int n;

    printf("\nThis program will compute the factorial of your number.\n");

    printf("\nEnter your number: ");
    scanf("%d", &n);

    printf("\n%d! = %d\n\n", n, fact(n));

    return 0;
}