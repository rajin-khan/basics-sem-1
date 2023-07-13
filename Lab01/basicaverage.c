#include<stdio.h>

int main() {

    int num1, num2, num3;
    float average, sum;

    printf("Please enter your first number:");
    scanf("%d", &num1);

    printf("Please enter your second number:");
    scanf("%d", &num2);
    
    printf("Please enter your third number:");
    scanf("%d", &num3);

    sum = num1+num2+num3;
    
    average = sum/3;

    printf("The Average is: %.1f\n", average);
    
    return 0;
}