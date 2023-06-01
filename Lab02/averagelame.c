#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    float average;
    float sum;

    printf("Please enter your first number:");
    scanf("%d", &num1);
    printf("Please enter your second number:");
    scanf("%d", &num2);
    printf("Please enter your third number:");
    scanf("%d", &num3);
    printf("Please enter your fourth number:");
    scanf("%d", &num4);

    sum = num1+num2+num3+num4;
    average = sum/4;

    printf("The Average is: %.2f\n", average);
    
    return 0;

}