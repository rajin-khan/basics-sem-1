/*
This program will read a (floating point) number from the user and check if it has any fractional part.
Consequent results will be printed.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float input; 

    printf("\nThis program will check whether your entered number is a fraction or an integer.\n");
    printf("\nPlease enter your number: ");
    scanf("%f", &input);

    if ((fmod(input, 1))!=0)
    {
        printf("\nThe number you have entered is not an integer.\n\n");
    }
    else
    {
        printf("\nThe number you have entered is an integer.\n\n");
    }

    return 0;
}