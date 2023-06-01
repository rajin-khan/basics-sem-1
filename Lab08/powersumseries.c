#include<stdio.h>

#include<math.h>

int main()
{
    int sum, m, x;

    printf("\nThis program will compute the sum of the series x⁰+x¹+x²...+x^m.\n");

    printf("\nPlease enter a value of x (an integer): ");
    scanf("%d", &x);
    
    printf("\nPlease enter a value of m (an integer): ");
    scanf("%d", &m);

    sum = 0;

    for (int i=0; i<=m; i++)
    {
        sum += ((pow(x, i)));
        printf("(%d ^ %d) + ", x, i);
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}