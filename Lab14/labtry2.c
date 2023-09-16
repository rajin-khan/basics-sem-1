//Write a program reads two arrays from user and then output their product.

#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter the size of your array: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("\nEnter the elements of the first array:\n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the elements of the second array:\n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<n; i++)
    {
        c[i] = a[i]*b[i];
        printf("\n%d * %d = %d", a[i], b[i], c[i]);
    }

    printf("\n\n ");

    return 0;
}