/*
This program will read a number from user and check if it is a palindrome.
(A number is a palindrome if the number is the same as its reverse, e.g. 23432)
*/

#include<stdio.h>
#include<math.h>

int main() {

    int num, numd, nnum, rnum=0, dig=0; //The variables for the input number, the dummy ones for calculating number of digits, and the one that stays the same for output comparison

    printf("\nThis program will check if your entered number a palindrome.\n\n");

    printf("Enter your number: ");
    scanf("%d", &num);

    numd = num; //The variable used for the calculation of the number of digits is assigned the same value as the input
    nnum = num; //The variable that will be used for comparison later is also assigned the same input value

    int ndig = 0; //The number of digits (the counter here) is initialized
    while (numd!=0) {

        numd /=10;
        ndig++; //Every time the last digit is dropped, the counter goes up, signifying the number of digits
    }

    for (; ndig>=0; ndig--) { //The loop continues until the number of digits counter decreases to zero
    
        dig = num%10; //The last digit is found, then multiplied and added by a power of 10 till the reverse number is completed
        rnum += (dig*(pow(10, ndig-1))); //Here 1 is subtracted to compensate for the calculation error, as when n becomes 1, the last digit is miltuplied by 10, not 1
        num /= 10;
    }
    
    if (nnum==rnum) { //The reversed number is compared to the original, unchanged number
    
        printf("\nThe number %d is a palindrome.\n\n", rnum);
    }
    else {
        
        printf("\nThe number %d is not a palindrome.\n\n", nnum);
    }

    return 0;
}