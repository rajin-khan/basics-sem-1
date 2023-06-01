/*
This program will compute the volume of a sphere.
The radius will be taken from the user.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.142

int main()
{
    float rad;
    float volume;
    float r³;

    printf("\nThis program will compute the volume of a sphere.\nPlease enter the radius:");
    scanf("%f", &rad);

    r³ = rad*rad*rad;

    volume = ((float)4/3)*(PI)*(r³);

    printf("\nThe volume of the sphere is: %.2f\n\n", volume);

    return 0;
}
