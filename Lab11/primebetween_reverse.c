//This program will print all the prime numbers between 1 and n (in reverse order).

#include<stdio.h>

int main()
{
    int n;

    printf("\nThis program will print all the prime numbers between 1 and n (in reverse order).\n");

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nAll the prime numbers between 1 and %d (in reverse order) are: \n", n);

    for (int i=n; i>=2; i--)
    {

        int prime = 1;

        for (int k=2; k<=i/2; k++)
        {
            if (i%k==0)
            {
                prime = 0;
                break;
            }
            else
            {
                continue;
            }
        }

        if (prime!=0)
        {
            printf("%d, ", i);
        }
    }

    printf("\b\b \n\n");

    return 0;
}