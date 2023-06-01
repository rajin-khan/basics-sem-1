/*
This program will take three coordinates of a triangle as an input,
check whether the triangle is valid or not,
and if so, specify what kind of triangle it is (equilateral, isosceles, or scalene)
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float a, b, c; //The three sides of the triangle

    printf("\nThis program will check whether your triangle is valid or not, after taking coordinates.\n");
    printf("\nEnter the co-ordinates (x,y) of the three points:\n");

    printf("\nCo-ordinate 1 (x1, y1) :\n");
    scanf("%f %f", &x1, &y1);
    printf("\nCo-ordinate 2 (x2, y2) :\n");
    scanf("%f %f", &x2, &y2);
    printf("\nCo-ordinate 3 (x3, y3) :\n");
    scanf("%f %f", &x3, &y3);

    a = pow((pow((x2-x1),2))+(pow((y2-y1),2)), (1.0/2));
    b = pow((pow((x3-x2),2))+(pow((y3-y2),2)), (1.0/2));
    c = pow((pow((x3-x1),2))+(pow((y3-y1),2)), (1.0/2));

    if (((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
        printf("\nThe triangle is valid.\n");

            if (a==b==c)
            {
                printf("\nTriangly type: Equilateral.\n\n");
            }
            else if ((a==b)||(a==c)||(b==c))
                {
                    printf("\nTriangly type: Isosceles.\n\n");
                }
            else
            {
                printf("\nTriangly type: Scalene.\n\n");
            }
    }
    else
    {
        printf("\nThe triangle is not valid.\n\n");
    }

    return 0;
}