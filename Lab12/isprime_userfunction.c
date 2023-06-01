/*
This program will include a function where it will take an integer (n) as a parameter,
and then return 1 if n is a prime number, 0 if not.
*/

#include<stdio.h>

int isprime(int x);

int main()
{
    int n;
    printf("\nThis program will check whether or not your entered number is prime.\nIt will return 1 if it is prime, and 0 if it isn't.\n\n");

    printf("Please enter your number: ");
    scanf("%d", &n);

    int ans = isprime(n);

    printf("\n%d\n\n", ans);

    return 0;
}

int isprime(int x) //can be any variable other than x
{
    int prime = 1; //the flag

    for (int i=2; i<=x/2; i++)
    {
        if (x%i==0)
        {
            prime = 0;
            break;
        }
        else
        {
            continue;
        }
    }
    return (prime==1); //will return 1 if true, 0 if not true (this is NOT returning the value of the flag, it is showing whether your comparison is true or false).
}