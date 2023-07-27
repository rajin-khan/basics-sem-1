/*
This program will take a minimum number, a maximum number, and common ratio,
and then print the sum of the geometric series between them.
*/

#include<stdio.h>

int main() {

    int min, max, rat, sum; //Yeah, rat is ratio

    printf("\nThis program will take a minimum number, a maximum number, and common ratio,\nand then print the sum of the geometric series between them.\n");
    
    printf("\nEnter the minimum number: ");
    scanf("%d", &min);
    printf("\nEnter the maximum number: ");
    scanf("%d", &max);
    printf("\nEnter the common ratio: ");
    scanf("%d", &rat);

    printf("\nThe sum of the series is: "); //Prints before the iteration begins

    sum = 0;

    for (int i=min; i<=max; i*=rat) { //i will continue to increment by multpluing with the entered ratio, until it is equal to the upper treshold
    
        printf("%d + ", i); //this print statement is repeated for every iteration, so it looks like: x1 + x2 +...
        sum += i;
    }
    
    printf("\b\b= %d\n\n", sum);

    return 0;
}