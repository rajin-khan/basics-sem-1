#include<stdio.h>

int main()
{
    int n;

    printf("Please enter n: ");
    scanf("%d", &n);

    int a[n];

    for (int i=0; i<n; i++)
    {
        printf("Please enter your number: ");
        scanf("%d", & a[i]);
    }

    int min = a[0];

    for (int i=0; i<n; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
    }

    printf("\n%d\n\n", min);

    return 0;
}