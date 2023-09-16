//This program will read an integer number and compute the sum of digits in it.

#include<stdio.h>

int main() {

    int num, dig, sum=0;

    printf("\nThis program will read your number (an integer) and compute the sum of digits in it.\n\n");

    printf("Please enter your number: ");
    scanf("%d", &num);

    printf("\nSum of the digits in %d", num);

    while (num!=0) {
        
        dig = num%10;
        sum += dig;
        num /=10;
    }

    printf (" = %d\n\n", sum);

    return 0;
}