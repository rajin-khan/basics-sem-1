/*
This program sks a shopper to enter amount (in kg) and total price of sugar he/she bought from different places. 
If the shopper mistakenly enters a negative number as amount/price, it prints an error message:
“Invalid input, enter a positive number” 
and prompts the shopper to give another input. 
When the shopper enters 0 as an amount then the program terminates 
and shows the shopper total amount, price and average price of sugar per kg.
*/

#include<stdio.h>

int main()
{
    float kg, price, tkg=0, tprice=0, count=0, avkg, avprice;

    printf("\nThis program will show you the total amount, price, and average price of your goods per kilogram.\n(Enter 0 to terminate input)\n");

    do
    {
        printf("\nEnter amount (in kg): ");
        scanf("%f", &kg);

        if (kg==0)
        {
            break;
        }

        if (kg<0)
        {
            printf("Invalid input, enter a positive number\n");
            continue;
        }

        printf("Enter price: ");
        scanf("%f", &price);

        if (price<0)
        {
            printf("Invalid input, enter a positive number\n");
            continue;
        }

        tkg += kg;
        tprice += price;

        count++;
        
    } while (kg!=0);

    avprice = tprice/tkg;

    printf("\nTotal amount (in kg): %.f\nTotal price: %.f\nAverage price (per kg): %.2f\n\n", tkg, tprice, avprice);

    return 0;
}