//This program will compute the sum of the series 3+6+12+...+n.

#include<stdio.h>

int main()
{
    int sum, n;

    printf("\nThis program will compute the sum of the series 3+6+12+...+n.\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0;

    for (int i=3; i<=n; i*=2)
    {
        printf("%d + ", i);
        sum +=i;
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}