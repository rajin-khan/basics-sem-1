//This program will compute the following series (using for loop): 10000+2000+400+...+8

#include<stdio.h>

int main() {
    
    int x, n, sum=0; //x is a dummy character to run the program

    printf("\nThis program will compute the sum of the series 10000+2000+400+...+16.\n");
    
    printf("\nPlease enter any character to run the program.\n");
    scanf("%d", &x);

    for (int i=10000; i>=8; i/=5) { //The counter is divided by 5 every time, decreases till it is equal to or greater than 8
    
        printf("%d + ", i); 
        sum += i; 
    }

    printf("\b\b= %d\n\n", sum); //Formatting to make it prettier

    return 0;
}