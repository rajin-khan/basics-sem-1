//Write a function that returns the number of times a value appears in an array.

#include<stdio.h>

int countSearchKey(int arr[], int size, int skey)
{
    int count = 0;

    for (int i=0; i<size; i++)
    {
        if (arr[i]==skey)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, key;

    printf("Input size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Input elements in array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Search Key: ");
    scanf("%d", &key);

    printf("Searc Key Appears: %d times", countSearchKey(array, n, key));

    return 0;
}