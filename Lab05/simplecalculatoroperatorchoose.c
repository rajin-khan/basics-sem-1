/* 
This program will execute a simple calculator that can read two numbers,
and the operation from the user,
and output the consequent results.
*/

#include<stdio.h>

int main() {

    float a, b, result, ressub1, ressub2, resdiv1, resdiv2; //a and b are the two numbers, ressub is the result after alternate subtraction of both numbers, and resdiv is the result after alternate division of both numbers
    char opr; //Stores the symbol for the operation

    printf("\nThis program will function as a simple calculator for two numbers.\n");

    printf("\nPlease enter two numbers:\n\n");
    scanf("%f %f", &a, &b);

    printf("\nWhat would you like to do to these numbers?\n");
    printf("\nEnter '+' for addition,\n");
    printf("or, '-' for subtraction,\n");
    printf("or, '*' for multiplication,\n");
    printf("or, '/' for division.\n\n");
    scanf(" %c", &opr); //Note: You HAVE to use a white space before %c, or scanf doesn't work for this different line.

    switch(opr) {
        
        case '+':
            result = a+b;
            printf("\n%.f+%.f = %.2f\n\n", a, b, result);
            break;
        case '-':
            ressub1 = a-b;
            printf("\n%.f-%.f = %.2f\n", a, b, ressub1);
            ressub2 = b-a;
            printf("%.f-%.f = %.2f\n\n", b, a, ressub2);
            break;
        case '*':
            result = a*b;
            printf("\n%.f*%.f = %.2f\n\n", a, b, result);
            break;
        case '/':
            resdiv1 = a/b;
            printf("\nThe result of %.f/%.f is %.2f.\n", a, b, resdiv1);
            resdiv2 = b/a;
            printf("The result of %.f/%.f is %.2f.\n\n", b, a, resdiv2);
            break;
        default:
            printf("\nInvalid operator. Please enter one from the ones specified.\n\n"); 
    }

    return 0;
}