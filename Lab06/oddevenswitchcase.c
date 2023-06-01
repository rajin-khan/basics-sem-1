//This program will read a number from the user and then print whether it is odd/even (switch-case);

#include<stdio.h>

int main()
{
    int k;

    printf("\nThis program will read a number and print whether it is odd or even.\n");

    printf("\nPlease enter the your number: ");
    scanf("%i", &k);

    switch ((k%2)==0)
    {
        case 1:
            printf("\nThe number is even.\n\n");
                break;
        case 0:
            printf("\nThe number is odd.\n\n");
                break;
    }

    return 0;
}