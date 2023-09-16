#include<stdio.h>

int sumton(int x)
{
    if (x==1)
    {
        return 1/3.0;
    }

    return (float)x/(2*x+1) + sumton(x-1);
}

int main()
{
    int n;

    printf("\nPlease enter the number up to which you would like to add: ");
    scanf("%d", &n);

    printf("\nThe sum is = %d\n\n", sumton(n));

    return 0;
}