//Write a C program to print the 2nd largest & 2nd smallest elements of an array.

#include<stdio.h>

int main()
{
    int n;

    printf("\nPlease enter the size of your array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    int max = array[0], min = array[0];

    for (int i=0; i<n; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }

        if(array[i]<min)
        {
            min = array[i];
        }
    }

    int max2, min2;

    for(int i=0; i<n; i++)
    {
        if(array[i]!=min)
        {
            min2=array[i];
        }
        if(array[i]!=max)
        {
            max2=array[i];
        }
    }

    for (int i=0; i<n; i++)
    {
        if((array[i]<max) && (max2<array[i]))
        {
            max2 = array[i];
        }

        if((array[i]>min) && (array[i]<min2))
        {
            min2 = array[i];
        }
    }

    printf("\nThe second largest value is %d, and the second smallest value is %d.\n\n", max2, min2);

    return 0;
}