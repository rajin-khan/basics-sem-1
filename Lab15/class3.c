#include<stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter the number of characters you would like to enter: ");
    scanf("%d", &n);

    char str[n];

    for (int i=0; i<n; i++)
    {
        printf("\nPlease enter your letter: ");
        scanf(" %c", &str[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            count++;
        }
    }

    printf("\nThe number of lowercase letters you have input is %d.\n\n", count);

    return 0;
}