//This program will take any number from the user and find the reverse of it using a simple loop.

#include<stdio.h>

int main()
{
    int num, dig; //Variables for the input number and the reversed digits

    printf("\nThis program will reverse your number.\n\n");

    printf("Please enter a number (an integer): ");
    scanf("%d", &num);

    if (!(num<=0))
    {
        printf("\nThe reversed number is: ");
        while (num!=0)//Continues till number is decreases to 0.
        {
            dig = num%10;
            printf("%d", dig); //Prints each of the last digits serially, hence showing the 'reversed' number
            num /= 10; //Last digit dropped
        }
        printf(" \n\n");
    }
    else
    {
        printf("\nPlease enter a positive number.\n\n");
    }

    return 0;
}