//This program will compute the sum of the following series (using while loop): 2³+5³+8³+...+n³

#include<stdio.h>
#include<math.h>

int main() {

    int n, sum;

    printf("\nThis program will compute the sum of the series 2³+5³+8³+...+n³.\n");
    
    printf("\nPlease enter a value of n (an integer): ");
    scanf("%d", &n);

    sum = 0; //the sum is initialized

    int i=2;
    while(i<=n) { //the upper treshold is set to the user input n
    
        printf("%d³ + ", i); //prints i1³ + i2³ + ... till n³.
        sum += pow(i, 3);
        i += 3; //increments by 3 according to the pattern 
    }

    printf("\b\b= %d\n\n", sum); //the two backspaces get rid of the '+' and the whitespaces form the previous iterated statement

    return 0;
}