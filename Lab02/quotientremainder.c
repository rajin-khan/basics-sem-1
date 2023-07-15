/*
This program will:
- Take inputs x and y from the user, and
- Calculate subsequent quotients and the remainders by dividing x by y and vice versa.
*/

#include<stdio.h>
#include<math.h>

int main() {
    
    int x, y, quo, rem;

    printf("\nPlease enter a value for x:");
    scanf("%i", &x);
    
    printf("\nPlease enter a value for y:");
    scanf("%i", &y);

    quo = x/y;
    rem = x%y;

    printf("\nThe Quotient of x/y is: %i.\n", quo);
    printf("\nThe Remainder of x/y is: %i.\n\n", rem);

    quo = y/x;
    rem = y%x;

    printf("\nThe Quotient of y/x is: %i.\n", quo);
    printf("\nThe Remainder of y/x is: %i.\n\n", rem);

    return 0;    
}