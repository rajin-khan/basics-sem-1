/*
This program will check if the roots of the equation ax²+bx+c=0 are real or not.
Inputs of a, b, and c will be taken from the user.
*/  

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    int c;
    float det; //The determinant
    float ans1, ans2; //The roots

    printf("\nThis program will calculate the roots of the equation ax²+bx+c=0.\n");
    printf("\nPlease enter the value of a:");
    scanf("%i",&a);
    printf("\nPlease enter the value of b:");
    scanf("%i",&b);
    printf("\nPlease enter the value of c:");
    scanf("%i",&c);

    int b² = b*b;
    det = (b²-(4*a*c));

    if (det==0)
    {
        printf("\nFor %dx²+%dx+%d,\n", a, b, c); //Visualising the equation makes it better for the user.

        ans1 = ans2 = ((-b)/(2*a));
         printf("\nThe roots are = %.2f, %.2f", ans1, ans2);
         printf("\nThe roots are real and equal.\n\n");
    }
    else if (det>0)
        {
            printf("\nFor %dx²+%dx+%d,\n", a, b, c);

            ans1 = (-(b)+sqrt(b²-(4*a*c)))/((float)2*a);
            ans2 = (-(b)-sqrt(b²-(4*a*c)))/((float)2*a);
             printf("\nThe roots are = %.2f, %.2f", ans1, ans2);
             printf("\nThe roots are real and distinct.\n\n");
        }
    else
    {
        printf("\nFor %dx²+%dx+%d,\n", a, b, c);
        printf("\nThe roots are not real (complex/imaginary).\n\n");
    }

    return 0;
}