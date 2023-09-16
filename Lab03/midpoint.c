/*
This program will read the co-ordinates of two points (x1,y1) and (x2,y2) from user,
and compute the midpoints of these two points.
*/

#include<stdio.h>

int main() {
    
    float x1, x2, y1, y2;
    float midx, midy; //The x and y co-ordinates of the midpoint

    printf("\nPlease enter the coordinates of the first point (in the format (x,y)):\n");
    scanf("%f %f", &x1, &y1);

    printf("\nPlease enter the coordinates of the second point (in the format (x,y)):\n");
    scanf("%f %f", &x2, &y2);

    midx = ((float)(x1+x2))/2;
    midy = ((float)(y1+y2))/2;

    printf("\nThe co-ordinates of the midpoint are: (%.2f,%.2f)\n\n", midx, midy);

    return 0;
}