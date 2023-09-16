//This program will find the sum of the following series using a user-defined function:  1² + ²2 + 3² + ... + N²

#include<stdio.h>

float squareseries(int x);

int main()
{
    int n;

    printf("\nPlease enter your number: ");
    scanf("%d", &n);

    float ans = squareseries(n);

    printf("\nThe sum of the series up to %d is = %.f\n\n", n, ans);

    return 0;
}

float squareseries(int x)
{
    float sum = 0;

    for (int i=1; i<=x; i++)
    {
        sum += (i*i);
    }
    
    return sum;
}