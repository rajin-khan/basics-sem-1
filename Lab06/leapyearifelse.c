//This program will check whether a year is a leap year or not, using if else.

#include<stdio.h>

int main()
{
    int year;

    printf("\nThis program will check whether the year you enter is a leap year, or not.\n");

    printf("\nPlease enter a year: ");
    scanf("%d", &year);

    if((year%100)==0) //this will check if it's a century year, e.g, 2000, 2100, 3400, 4000, etc
    {
        if ((year%400)==0) //check again if the century year is divisible by 400
        {
            printf("\n%d is a leap year.\n\n", year);
        }
        else
        {
            printf("\n%d is not a leap year.\n\n", year);
        }
    }
    else if ((year%4)==0) //check if the other years (apart from the century years) are divisible by 4 (the normal condition for a leap year).
        {
            printf("\n%d is a leap year.\n\n", year);
        }
        else
        {
            printf("\n%d is not a leap year.\n\n", year);
        }
        
    return 0;
}
