//This program will compute the sum of the series 2-4+6-8...+n.

#include<stdio.h>

int main()
{
    int sum, n, x;

    printf("\nThis program will compute the sum of the series 2-4+6-8...+n.\n");
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 2;
    x=1;
    printf("%d - ", sum);

    for (int i=4; i<=n; i+=2)
    {    
        if ((x%2)!=0)
        {
            printf("%d + ", i);
            sum -= i;
            x++;
        }
        else
        {
            printf("%d - ", i);
            sum +=i;
            x++;
        }       
    }
    printf("\b\b= %d\n\n", sum);

    return 0;
}