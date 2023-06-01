/*
This program will take a minimum number, a maximum number, and common difference,
and then print the sum of the arithmetic series between them.
*/

#include<stdio.h>

int main()
{
    int min, max, diff, sum;

    printf("\nThis program will take a minimum number, a maximum number, and common difference,\nand then print the sum of the arithmetic series between them.\n");
    
    printf("\nEnter the minimum number: ");
    scanf("%d", &min);
    printf("\nEnter the maximum number: ");
    scanf("%d", &max);
    printf("\nEnter the common difference: ");
    scanf("%d", &diff);

    printf("\nThe sum of the series is: ");

    sum = 0;

    for (int i=min; i<=max; i+=diff) //i continues untill it is equal to the maximum treshold, it is incremented by the difference for every iteration
    {
        printf("%d + ", i);
        sum += i;
    }
    
    printf("\b\b = %d\n\n", sum);

    return 0;
}