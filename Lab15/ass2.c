/*
Write a C program to put even and odd elements of an array in two separate arrays and show them.

Sample input/output:
Input size of the array: 10
Input elements in array: 0 1 2 3 4 5 6 7 8 9

Even elements in array: 0 2 4 6 8
Odd elements in array: 1 3 5 7 9
*/

#include<stdio.h>

int main()
{
    int n, even=0, odd=0, j=0, k=0;

    printf("Input size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Input elements in array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    int arrayeven[even], arrayodd[odd];

    for (int i=0; i<n; i++)
    {
        if (array[i]%2==0)
        {
            arrayeven[j]=array[i];
            j++;
        }
        else
        {
            arrayodd[k]=array[i];
            k++;
        }
    }

    printf("Even elements in array: ");

    for (int i=0; i<even; i++)
    {
        printf("%d ", arrayeven[i]);
    }

    printf("\nEven elements in array: ");

    for (int i=0; i<odd; i++)
    {
        printf("%d ", arrayodd[i]);
    }

    return 0;

}

