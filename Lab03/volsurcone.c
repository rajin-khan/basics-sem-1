/*
This program will compute the volume & surface area of a cone.
The radius and the height will be taken from the user.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.142

int main()
{
    float coner, coneh; //The radius and height of the cone
    float vol;
    float sarea; //The surface area
    float h², r², r³;

    printf("\nThis program will compute the volume and surface area of a cone.\n");

    printf("\nPlease enter the radius of the cone(in cm): ");
    scanf("%f", &coner);
    printf("Please enter the height of the cone(in cm): ");
    scanf("%f", &coneh);

    h² = coneh*coneh;
    r² = coner*coner;

    vol = ((float)(PI*r²*coneh))/3;
    sarea = (PI*coner)*(coner+(pow(h²+r²,(float)1/2)));

    printf("\nThe volume of the cone is = %.2fcm³.", vol);
    printf("\nThe surface area of the cone is = %.2fcm².\n\n", sarea);

    return 0;
}