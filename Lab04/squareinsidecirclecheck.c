/*
This program will read the radius 'r' of a circle and the side 'a' of a square from user.
It will then then check whether or not that square can be placed inside that circle.
*/

#include<stdio.h>
#include<math.h>

int main() {

    float a, diag, rad;

    printf("\nThis program will determine whether a given square can be placed in a circle.\n");

    printf("\nPlease enter a side of the square: ");
    scanf("%f", &a);
    printf("\nPlease enter the radius of the circle: ");
    scanf("%f", &rad);

    
    diag = pow(2*(pow(a, 2)), ((float)1)/2);

    if (((diag)/(float)2)<=rad) {
        
        printf("\nYour square can be placed inside the circle.\n\n");
    }
    else {
        
        printf("\nYour square cannot be placed inside the circle.\n\n");
    }
    
    return 0;
}