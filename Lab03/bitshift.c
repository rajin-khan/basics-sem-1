/*
This program will take inputs m and n from the user.
The value of m << n (m, left bit shift by n) will be calculated, along with the value of m * 2ⁿ.
The value of m >> n (m, right bit shift by n) will be calculated, along with the value of m / 2ⁿ.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int m, n;

    printf("\nThis program will calculate the vlaue of m << n.\nPlease enter a value for m:");
    scanf("%d", &m);
    printf("Please enter a value for the left shift, n:");
    scanf("%d", &n);

    printf("\nThe value of %d, left shift by %d, is: %d\n", m, n, m << n);
    printf("This is also equivalent to m * 2ⁿ, which is: %.f\n\n", m*(pow(2,n)));

//The pattern here is that m<<n is equivalent to m multiplied by 2 raised to the power n.


    printf("\nNow, the program will calculate the vlaue of m >> n.\nPlease enter a new value for m:");
    scanf("%d", &m);
    printf("Please enter a new value for the right shift, n:");
    scanf("%d", &n);

    printf("\nThe value of %d, right shift by %d, is: %d\n", m, n, m >> n);
    printf("This is also equivalent to m / 2ⁿ, which is: %.f\n\n", m/(pow(2,n)));

//The pattern here is that m>>n is equivalent to m divided by 2 raised to the power n.


    return 0;
}

