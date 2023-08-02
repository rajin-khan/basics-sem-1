/*
This program will read any integer from user and compute its reverse. 
It will further output whether or not the reverse number is prime.
*/

#include<stdio.h>
#include<math.h>

int main() {

    int num, numd, rnum=0, dig=0, isprime=69; //'Flag'/Indicator for the prime number; can be set to any non-zero value, which means true

    printf("\nThis program will reverse your number and check if it is prime.\n\n");

    printf("Enter your number: ");
    scanf("%d", &num);

    numd = num;

    int ndig = 0;
    while (numd!=0) {

        numd /=10;
        ndig++;
    }

    for (; ndig>=0; ndig--) {

        dig = num%10;
        rnum += (dig*(pow(10, ndig-1)));
        num /= 10;
    }

    printf("\nThe reverse of your number is: %d\n", rnum);

    for (int i=2; i<=(rnum/2); i++) {

        if ((rnum%i)==0) {

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