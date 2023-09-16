//This program will check whether a year is a leap year or not, using switch case.

#include<stdio.h>

int main() {

    int year;

    printf("\nThis program will check whether the year you enter is a leap year, or not.\n");

    printf("\nPlease enter a year: ");
    scanf("%d", &year);

    switch((year%100)==0) {

        case 1: 
            switch((year%400)==0) {

                case 1:
                    printf("\n%d is a leap year.\n\n", year);
                    break;
                case 0:
                    printf("\n%d is not a leap year.\n\n", year);
                    break;
            }
            break;
        case 0: 
            switch((year%4)==0) {
                
                case 1:
                    printf("\n%d is a leap year.\n\n", year);
                    break;
                case 0:
                    printf("\n%d is not a leap year.\n\n", year);
                    break;
            }
            break;
    }

    return 0;
}
