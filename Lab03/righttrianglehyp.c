/*
This program will compute the hypotenuse of a right-angled triangle.
The length of the base and height of the triangle will be taken from the user.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float base, height;
    float hyp; //The hypotenuse
    float b², h²;

    printf("\nThis program will compute the hypotenuse of a right-angled triangle.");
    
    printf("\n\nPlease enter the length of the base (in cm): ");
    scanf("%f", &base);
    printf("Please enter the length of the height (in cm): ");
    scanf("%f", &height);

    b² = base*base;
    h² = height*height;

    hyp = (pow(b²+h²,((float)1)/2));

    printf("\nThe length of the hypotenuse is = %.2fcm\n\n", hyp);

    return 0;
}