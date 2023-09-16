//0 1 1 2 3 5 8 13

#include<stdio.h>

int main()
{
    int n, count = 0;

    int fib1 = 0, fib2 = 1;

    printf("enter n: ");
    scanf("%d", &n);

    while (count<=n)
    {
        if (n==1)
        {
            printf("%d\n\n", fib1);
        }

        if (count==n)
        {
            printf("%d\n\n", fib2);
            break;
        }

        count++;
    }

    return 0;
}