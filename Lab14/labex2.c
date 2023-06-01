//Write a program that prints all the indexes in which a search key appears.

#include<stdio.h>

int main()
{
    int n, skey, found=0;

    printf("\nPlease enter the size of your array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nPlease enter the value that you would like to search for: ");
    scanf("%d", &skey);

    printf("\nThe value %d appears in: \n\n", skey);

    for (int i=0; i<n; i++)
    {
        if (array[i]==skey)
        {
            printf("index %d in your array.\n", i);
            found = 1;
        }
    }

    if (found != 1)
    {
        printf("no indexes in your array.\n");
    }

    printf("\n ");

    return 0;
}