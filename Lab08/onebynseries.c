#include<stdio.h>

int main()
{
    float sum, n;

    printf("\nThis program will compute the sum of the series (1/1)+(1/2)+(1/3)...+(1/n).\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%f", &n);

    sum = 0;

    for (float i=1; i<=n; i++)
    {
        sum += (1/i);
        printf("(1/%.f) + ", i);
    }
    printf("\b\b= %.2f\n\n", sum);

    return 0;
}