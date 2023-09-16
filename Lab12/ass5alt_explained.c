//5.678
//.678*100 = 67.8 = .8 (.8>0.5?) yes, so 68, then divided by base to convert it back to decimal, so 0.68, so finally, 5.68

#include<stdio.h>

float x(float num, float points)
{
    int base = 1;

    for (int i=1; i<=points; i++)
    {
        base *=10;
    }

    float frac = num -(int)num; //finds the fractional part
    float x = frac* base; //finds the rounding value
    float frac_x = x - (int)x; //calculates the last 0.5 in the last decimal place

    if (frac_x>=0.5) //if it is greater than 0.5, add 1 to it
    {
        x = (int)x + 1;
    }

    x/=base; //convert it back to decimal

    return (int)num + x;
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