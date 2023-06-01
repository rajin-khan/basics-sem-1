#include<stdio.h>

int main()
{
    int num1;
    int num2;
    float Sum, Product, Difference, Quotient, Remainder;

    printf("Please enter your first number:");
    scanf("%i", &num1);
    printf("Please enter your second number:");
    scanf("%i", &num2);

    Sum = num1+num2;
    Product = num1*num2;
    Difference = num1-num2;
    Quotient = num1/num2;
    Remainder = num1-(Quotient*num2);

    printf("The Sum is: %.2f\n", Sum);
    printf("The Product is: %.2f\n", Product);
    printf("The Difference is: %.2f\n", Difference);
    printf("The Quotient is: %.2f\n", Quotient);
    printf("The Remainder is: %.2f\n", Remainder);

    return 0;

}