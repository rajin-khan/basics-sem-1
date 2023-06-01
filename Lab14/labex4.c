//Write a program that prints ALL indexes in which the smallest value of array is present.

#include<stdio.h>

int main()
{
    int n, min;

    printf("\nPLease enter the size of your array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    min = array[0];

    for (int i=0; i<n; i++)
    {
        if (array[i]<min)
        {
            min = array[i];
        }
    }

    printf("\nThe minimum value, %d, is present in: \n", min);

    for (int i=0; i<n; i++)
    {
        if (min==array[i])
        {
            printf("\nindex %d of your array.", i);
        }
    }

    printf("\n\n ");

    return 0;
}
