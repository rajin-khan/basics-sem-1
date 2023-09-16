/*
This program will read an integer number and compute the sum of digits in it.
It will further check if the sum is a prime number.
*/

#include<stdio.h>

int main() {

    int num, dig, sum=0, isprime=420;

    printf("\nThis program will read your number (an integer) and compute the sum of digits in it.\nIt will then check if the sum is a prime number.\n\n");

    printf("Please enter your number: ");
    scanf("%d", &num);

    printf("\nSum of the digits in %d", num);

    while (num!=0) {

        dig = num%10;
        sum += dig;
        num /=10;
    }

    printf (" = %d\n\n", sum);

    for (int i=2; i<=(sum/2); i++) {

        if ((sum%i)==0) {

            isprime = 0;
            break;
        }
    }

    if (isprime==0) {

        printf("It is not a prime number.\n\n");
    }
    else {
        printf("It is a prime number.\n\n");
    }

    return 0;
}