//This number will check if a given number is prime using a user-defined function.

#include<stdio.h>

int primecheck(int x);

int main()
{
    int n;

    printf("\nPlease enter a number: ");
    scanf("%d", &n);

    int ans = primecheck(n);

    if (ans==1) //comparing the value of the flag and printing statements accordingly
    {
        printf("\n%d is a Prime Number.\n\n", n);
    }
    else if (ans==0)
        {
            printf("\n%d is not a Prime Number.\n\n", n);
        }

    return 0;
}

int primecheck(int x)
{
    int isprime = 1;

    for (int i=2; i<=x/2; i++)
    {
        if (x%i==0)
        {
            isprime = 0;
            break;
        }
    }
    
    return isprime; //Here, it is returning the value of the flag, so more efficient
}