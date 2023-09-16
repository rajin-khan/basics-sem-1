//This number will check if a given number is prime using a user-defined function (without using a flag).

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
        printf("\n%d is a prime number.\n\n", n);
    }
    else if (ans==0)
        {
            printf("\n%d is not a prime number.\n\n", n);
        }

    return 0;
}

int primecheck(int x)
{

    for (int i=2; i<=x/2; i++)
    {
        if (x%i==0)
        {
            return 0; //there is no need to add a break as return exits the loop
        }
    }
    return 1; //Here, it is returning 1 or 0, hence the return is acting as the flag
}