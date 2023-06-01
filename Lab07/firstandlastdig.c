//This program will read an integer from user and output its first and last digit.

#include<stdio.h>

int main()
{
    int numf, numl, last; //The variables used for calculating the first digit and the last digit, and storing it too

    printf("\nThis program will output the first and last digit of a number you enter.\n\n");

    printf("Enter your number: ");
    scanf("%d", &numf);

    numl = numf; //The number used for the last digit calculation must also be the same

    if (numf>=10) //Verifies whether the number is more than a single digit
    {
        while (numf>9) //Loop continues till it becomes a single digit (the first)
        {
            numf/=10; //Last digit keeps getting dropped
        }

        printf("\nThe first digit is %d, and ", numf);
        
        last = numl%10; //The last digit

        printf("The last digit is %d.\n\n", last);
    }
    else
    {
        printf("\nYou have entered a single digit number. Please enter a two digit number for this program to work.\n\n");
    }

    return 0;
}