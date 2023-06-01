
/*
This program will calculate the solutions of the equation ax²+bx+c=0.
Inputs of a, b, and c will be taken from the user.
*/  

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    int c;
    float ans1;
    float ans2;

    printf("\nThis program will calculate the solutions of the equation ax²+bx+c=0.\n");
    printf("\nPlease enter the value of a:");
    scanf("%i",&a);
    printf("\nPlease enter the value of b:");
    scanf("%i",&b);
    printf("\nPlease enter the value of c:");
    scanf("%i",&c);

    int b² = b*b;

    ans1 = (-(b)+sqrt(b²-(4*a*c)))/((float)2*a);
    ans2 = (-(b)-sqrt(b²-(4*a*c)))/((float)2*a);

    printf("\nThe solutions of the equation are = %.2f, %.2f \n\n", ans1, ans2);

    return 0;
}