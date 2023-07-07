//This program will read three numbers from the user and print the smallest one from them.

#include<stdio.h>

int main()
{
    int a, b, c;

    printf("\nThis program will read three numbers from you and print the smallest one from them.\n");

    printf("\nPlease enter the first number: ");
    scanf("%i", &a);
    printf("\nPlease enter the second number: ");
    scanf("%i", &b);
    printf("\nPlease enter the third number: ");
    scanf("%i", &c);

    if (a<b && a<c)
    {
        printf("\nThe smallest one is: %i\n\n", a);
    }
    else if (b<c)
        {
            printf("\nThe smallest one is: %i\n\n", b);
        }
    else 
    {
        printf("\nThe smallest one is: %i\n\n", c);
    }

    return 0;
}