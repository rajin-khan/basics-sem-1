/*

This program will calculate tax from a given input of salary.
Tax is caluclated as follows:

Salary = 0.00 ~ 14,999.99 / Base Tax = 0.00, Excess = 15%
Salary = 15,000 ~ 29,999.99 / Base Tax = 2250.00, Excess = 18%
Salary = 30,000 ~ 49,999.99 / Base Tax = 5400.00, Excess = 22%
Salary = 50,000 ~ 79,999.99 / Base Tax = 11,000.00, Excess = 27%
Salary = 80,000 ~ 150,000 / Base Tax = 21,600.00, Excess = 33%

*/

#include<stdio.h>

int main()
{
    float sal, btx, tax, ttax; //variables for the salary, the base tax, the excess tax, and the total tax

    printf("\nThis program will calculate your tax after taking your salary as an input:\n");

    printf("\nPlease enter your salary: $");
    scanf("%f", &sal);

    if ((sal>=0)&&(sal<15000))
    {
        btx = 0;
        tax = ((float)15/100)*(sal);
        ttax = btx + tax;

        printf("\nYour total tax for this month is = $%.2f\n\n", ttax);
    }
    else if ((sal>=15000)&&(sal<30000))
        {
            btx = 2250;
            tax = ((float)18/100)*(sal);
            ttax = btx + tax;

            printf("\nYour total tax for this month is = $%.2f\n\n", ttax);
        }
    else if ((sal>=30000)&&(sal<50000))
        {
            btx = 5400;
            tax = ((float)22/100)*(sal);
            ttax = btx + tax;

            printf("\nYour total tax for this month is = $%.2f\n\n", ttax);
        }
    else if ((sal>=50000)&&(sal<80000))
        {
            btx = 11000;
            tax = ((float)27/100)*(sal);
            ttax = btx + tax;

            printf("\nYour total tax for this month is = $%.2f\n\n", ttax);
        }
    else if ((sal>=80000)&&(sal<150000))
        {
            btx = 21600;
            tax = ((float)33/100)*(sal);
            ttax = btx + tax;

            printf("\nYour total tax for this month is = $%.2f\n\n", ttax);
        }
    else 
    {
        printf("\nYour salary exceeds the calculation bracket.\n\n");
    }

    return 0;
}
