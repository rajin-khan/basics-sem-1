#include<stdio.h>

int main()
{
    int b, a;
    
    printf("\nThis program will swap the two numbers you enter.\n");

    printf("\nPlease enter the first number:\n");
    scanf("%i", &b);

    printf("Please enter the second number:\n");
    scanf("%i", &a);

    printf("\nThe order you entered was : %i : %i \n", b, a);
    printf("The swapped numbers are : %i : %i \n\n", a, b);

    return 0;
}