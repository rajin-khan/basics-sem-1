#include<stdio.h>

float x(float a, float b)
{
    int base = 1;
    for (int i=1; i<=b; i++)
    {
        base *= 10;
    }

    float decpart = a - (int)a;
    float decuse = decpart*base;

    float checklast = decuse - (int)decuse;

    if (checklast>=0.5)
    {
        decuse = (int)decuse + 1;
    }
    else
    {
        decuse = (int)decuse;
    }

    decuse/=base;

    return (int)a + decuse;
}

int main()
{
    float n, ans, d;

    printf("\nThis program will round your decimal number n, up to an integer d (up to 6 decimal places).\n");

    printf("\nPlease enter the values of n and d.\n");

    printf("\nn: ");
    scanf("%f", &n);

    printf("\nd (up to 6): ");
    scanf("%f", &d);

    printf("The rounded number is: %f", x(n, d));

    return 0;
}