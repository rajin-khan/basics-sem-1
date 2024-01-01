//Write a program that deletes all the elements in an array which matches a search key.

#include<stdio.h>

int main()
{
    int n, x;

    printf("\nPlease enter the size of your array: ");
    scanf("%d", &n);

    int array[n]; n

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nPlease enter the element you would like to search for and delete: ");
    scanf("%d", &x);

    int k;

    for (int i=0; i<n; i++)
    {
        for (int i=0; i<n; i++)
        {
            if (array[i]==x)
            {
                k = i;

                for (int i=k; i<n-1; i++)
                {
                    array[i] = array[i+1];
                }
                n--;
            }
        }
    }

    printf("\nYour new array is: \n\n");

    for (int i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("\n");

    return 0;
}