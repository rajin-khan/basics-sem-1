/*
This program will decide whether a person is eligible to work in a particular company or not.
The criteria is that their age must be between 25 and 45.
*/

#include<stdio.h>

int main()
{
    int age;

    printf("\nThis program will determine whether you are eligible to work or not.\n");
    printf("\nPlease enter your age:");
    scanf("%i", &age);

    if ((age>=25)&&(age<=45))
        {
            printf("\nYou are of eligible age. Please proceed!\n\n");
        }
    else
        {
            printf("\nYou are too young, or too old.\n\n");
        }

    return 0;
}