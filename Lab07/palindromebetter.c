/*
This program will read a number from user and check if it is a palindrome.
(A number is a palindrome if the number is the same as its reverse, e.g. 23432)
*/

#include<stdio.h>

int main() {

    int n, rnum = 0;;

    printf("\nThis program will check if your entered number is a palindrome.\n");

    printf("\nPlease enter your number: ");
    scanf("%d", &n);

    for (int k=n; k!=0; k/=10) {

        rnum = (rnum*10) + (k%10);
    }

    if (rnum==n) {

        printf("\n%d is a palindrome number.\n\n", rnum);
    }
    else {
        
        printf("\n%d is not a palindrome number.\n\n", n);
    }

    return 0;
}