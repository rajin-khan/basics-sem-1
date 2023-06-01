//This program will calculate the volume of a cube and cylinder, taking measurements from the user.

#include<stdio.h>
#include<math.h>

int main()
{
    float cubel; //The cube's length
    float cubevol; //The cube's volume

    float cylh; //The cylinder's height
    float cyldm; //The cylinder's diameter
    float cylrad; //The cylinder's radius
    float cylvol; //The cylinder's volume
    float const PI = 3.142;

    printf("\nPlease enter the length of the cube:");
    scanf("%f", &cubel);

    cubevol = pow(cubel,3);

    printf("\nThe volume of the cube is = %.2f cm³.\n", cubevol);

    printf("\nPlease enter the height of the cylinder:");
    scanf("%f", &cylh);
    printf("\nPlease enter the diameter of the cylinder:");
    scanf("%f", &cyldm);

    cylrad = cyldm/2;
    cylvol = PI*(pow(cylrad,2))*cylh;
    
    printf("\nThe volume of the cylinder is = %.2f cm³.\n\n", cylvol);
    
    return 0;
}