//Write a program that prints ALL indexes in which the largest value of array is present.

#include<stdio.h>

int main()
{
    int n, max;

    printf("\nPLease enter the size of your array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    max = array[0];

    for (int i=0; i<n; i++)
    {
        if (max<array[i])
        {
            max = array[i];
        }
    }

    printf("\nThe maximum value, %d, is present in: \n", max);

    for (int i=0; i<n; i++)
    {
        if (max==array[i])
        {
            printf("\nindex %d of your array.", i);
        }
    }

    printf("\n\n ");

    return 0;
}