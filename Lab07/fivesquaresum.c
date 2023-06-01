//This program will compute the sum of the series 5+25+125+...+n.

#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum;

    printf("\nThis program will compute the sum of the series 5+25+125+...+n.\n");
    
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0;

    for (int i=1; (pow(5, i))<=n; i++)
    {
        printf("%.f + ", pow(5, i));
        sum += pow(5, i);   
    }

    printf("\b\b= %d\n\n", sum);

    return 0;
}