/*
The fibonacci sequence is 0 1 1 2 3 5 8 13 (basically sum of last two numbers)
so, the nth fibonacci number is = sumof(n-1th) and (n-2th)
*/

#include<stdio.h>

int fib(int x)
{
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    else 
    {
        return fib(x-1) + fib(x-2);
    }
}

int main()
{
    int n;

    printf("\nThis program will print the n-th fibonacci number.\n");

    printf("\nPlease enter n: ");
    scanf("%d", &n);

    printf("\nThe n-th fibonacci number is: %d\n\n", fib(n));

    return 0;
}