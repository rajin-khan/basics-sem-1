/*
This program will use a user-defined function that reads a floating point number n and an integer d,
and then prints the rounded value of n up to d decimal places. 
E.g. for n=5.678 and d = 2,
it should print 5.68.
*/

#include<stdio.h>

void deciround(float x, int y);

int main()
{
    float n, ans;
    int d;

    printf("\nThis program will round your decimal number n, up to an integer d (up to 6 decimal places).\n");

    printf("\nPlease enter the values of n and d.\n");

    printf("\nn: ");
    scanf("%f", &n);

    printf("\nd (up to 6): ");
    scanf("%d", &d);

    deciround(n, d);

    return 0;
}

void deciround(float x, int y)
{
    if (y==1)
    {
        printf("\n%.f\n\n", x);
    }
    else if (y==2)
        {
            printf("\n%.2f\n\n", x);
        }
    else if (y==3)
        {
            printf("\n%.3f\n\n", x);
        }
    else if (y==4)
        {
            printf("\n%.4f\n\n", x);
        }
    else if (y==5)
        {
            printf("\n%.5f\n\n", x);
        }
    else if (y>=6)
        {
            printf("\n%f\n\n", x);
        }
}