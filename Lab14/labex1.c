//Write a program that searches for a given value (called a search key) in an array and prints the first and last index in which that value appears.

#include<stdio.h>

int main()
{
    int n, skey, firsti, lasti;

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

    for (int i=0; i<n; i++)
    {
        if (skey==array[i])
        {
            firsti = i;
            break;
        }
    }

    for (int i=n-1; i>=0; i--)
    {
        if (skey==array[i])
        {
            lasti = i;
            break;
        }
    }

    if (array[firsti]==skey && array[lasti]==skey)
    {
        printf("\nThe value %d appears first in index %d in your array.\n", array[firsti], firsti);
        printf("\nThe value %d appears first in index %d in your array.\n\n", array[lasti], lasti);
    }
    else
    {
        printf("\nYour entered search key does not match any elements in your given array.\n\n");
    }

    return 0;
}

