/*
This program will take a month (as a number input, e.g, January = 1),
and print the number of days in it.
*/

#include<stdio.h>

int main()
{
    int month;
    int ans;

    printf("\nThis program will take a month and print the number of days in it.\n");
    printf("\nPlease enter a month number (e.g, January = 1): ");
    scanf("%i", &month);

    if ((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
    {
        printf("\nThis month has 31 days.\n\n");
    }
    else if ((month==9)||(month==4)||(month==6)||(month==11))
        {
            printf("\nThis month has 30 days.\n\n");
        }
    else
    {
        printf("\nIs it a leap year?\n(Type 1 for Yes, or 0 for No):");
        scanf("%d", &ans);

        if (ans==1)
        {
            printf("\nThe number of days is 29.\n\n");
        }
        else
        {
            printf("\nThe number of days is 28.\n\n");
        }
    }

    return 0;
}