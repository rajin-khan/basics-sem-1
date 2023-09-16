/*
This program will check whether an input number is a perfect number or not.
(A perfect number is a positive integer which is equal to the sum of its proper positive factors,
e.g. 6 is a perfect number; because proper factors of 6 are 1, 2, 3 and 1+2+3 = 6.)
*/

#include<stdio.h>

int main() {

    int num, sum=0;

    printf("\nThis program will will check if your input number is a perfect number.\n\n");

    printf("Enter your number: ");
    scanf("%d", &num);

    printf("\nThe factors are: ");

    for (int i=1; i<=(num/2); i++) { //Calculates and prints the factors, loop continues till num/2 as it is the largest possible factor
    
        if ((num%i)==0) { //Checks divisibility
        
            printf("%d, ", i);
        }
    }
    printf("\b\b.\n"); //Formatting

    printf("As ");

    for (int i=1; i<=(num/2); i++) { //Calculates and prints the sum of the factors
    
        if ((num%i)==0) {

            printf("%d + ", i);
            sum +=i;
        }
    }
    printf("\b\b = %d,\n", sum); //wowmoreformatting

    if (sum==num) {

        printf("%d is a perfect number.\n\n", num);
    }
    else {

        printf ("%d is not a perfect number.\n\n", num);
    }
    
    return 0;
}