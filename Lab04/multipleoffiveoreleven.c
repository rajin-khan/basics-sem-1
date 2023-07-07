/*
This program will check if an input integer is a multiple of 5, or 11, or both, or neither.
*/

#include<stdio.h>

int main()
{
    int num;

    printf("\nThis program will check if your input number is a multiple of 5, or 11, both, or neither.\n");
    printf("\nPlease enter your number (an integer): ");
    scanf("%i", &num);

    if (num%55==0)
    {
        printf("\nThe number you've entered is a multiple of both 5 and 11.\n\n");
    }
    else if (num%11==0)
    {
        printf("\nThe number you've entered is a multiple of 11.\n\n");
    }
    else if (num%5==0)
    {
        printf("\nThe number you've entered is a multiple of 5.\n\n");
     }
    else
    {
        printf("\nThe number you've entered is not a multiple of either.\n\n");
    }

    return 0;
}