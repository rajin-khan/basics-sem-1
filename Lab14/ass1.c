//Write a program that deletes the first element in an array which matches a search key.

#include<stdio.h>

int main()
{
    int n, x;

    printf("\nPlease enter the size of your array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n ");

    printf("\nPlease enter the element you would like to search for and delete: ");
    scanf("%d", &x);

    int k;

    for (int i=0; i<n; i++)
    {
        if (arr[i]==x)
        {
            k = i;
            break;
        }
    }

    for (int i=k; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    printf("\nYour new array is: \n\n");

    for (int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    return 0;
}