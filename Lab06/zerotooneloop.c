//This program will display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order.

#include<stdio.h>

int main()
{
    int i;

    for (i=9; i>=0; i--) //here, the upper treshold starts from 9, and is decremented till it reaches 0
    {
        if (i==9)
        {
            printf("\n%d ", i); //prints i for every iteration
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}