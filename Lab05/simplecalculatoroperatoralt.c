/* 
This program will execute a simple calculator that can read two numbers,
and the operation from the user,
and output the consequent results.
*/

#include<stdio.h>

int main() {


    float a, b, result, resdiv1, resdiv2; //a and b are the two numbers, resdiv is the result after alternate division of both numbers
    char opr; //Stores the symbol for the operation

    printf("\nThis program will function as a simple calculator for two numbers.\n");
    printf("Please enter two numbers, followed by the operation.\n");

    printf("\nEnter '+' for addition,\n");
    printf("or, '-' for subtraction,\n");
    printf("or, '*' for multiplication,\n");
    printf("or, '/' for division.\n\n");

    scanf("%f %f %c", &a, &b, &opr); //Note: I had to take three inputs at once because scanf wouldn't work like this across different lines, unless I used a white space before %c.

    switch(opr) {
        
        case '+':
            result = a+b;
            printf("\nThe result is %.2f\n\n", result);
            break;
        case '-':
            result = a-b;
            printf("\nThe result is %.2f\n\n", result);
            break;
        case '*':
            result = a*b;
            printf("\nThe result is %.2f\n\n", result);
            break;
        case '/':
            resdiv1 = a/b;
            printf("\nThe result of %.f/%.f is %.2f\n", a, b, resdiv1);
            resdiv2 = b/a;
            printf("The result of %.f/%.f is %.2f\n\n", b, a, resdiv2);
            break;
        default:
            printf("\nInvalid operator. Please enter one from the ones specified.\n\n"); 
    }

    return 0;
}