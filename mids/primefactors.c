#include<stdio.h>

void primefactors(int x)
{
    for (int i=2; i<=x/2; i++)
    {
        if (x%i==0)
        {
            int isprime = 1;

            for (int j=2; j<=i/2; j++)
            {
                if (i%j==0)
                {
                    isprime = 0;
                    break;
                }
            }

            if (isprime==1)
            {
                printf("%d, ", i);
            }
        }
    }
}

int main()
{
    int n;

    printf("enter your number: ");
    scanf("%d", &n);

    primefactors(n);

    printf("\b\b ");

    return 0;
}