//This program will print an asterisk right triangle for the number of lines you enter.

#include<stdio.h>

int main() {

    int l;

    printf("\nThis program will print an asterisk right-triangle for the number of lines you enter.\n\n");

    printf("Please enter the number of lines: ");
    scanf("%d", &l);

    printf("\n");

    for (int i=1; i<=l; i++) { //Loops and prints the number of lines till the input l
    
        for (int a=1; a<=i; a++) { //for each iteration, prints an asterisk for the current value of i (so first iteration has one *, second iteration, i.e, second line, has two *-s, and so on)
        
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    return 0;    
}