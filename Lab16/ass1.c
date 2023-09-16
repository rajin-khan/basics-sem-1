/*

Write a C program to find sum of border elements (bold ones) of a matrix.

Example: 
If the array elements are: 

1  2  3  4

4  5  6  7

7  8  9  9

Output should be: Sum of main border elements = 54,
because 1+2+3+4+7+9+9+8+7+4 = 54

*/

#include<stdio.h>

int main()
{
    int a, b, sum=0;

    printf("Please enter the size of the matrix: ");
    scanf("%d %d", &a, &b);

    int matrix[a][b];

    printf("Please enter the elements of the matrix: ");

    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            printf("Matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<=a-1; i++)
    {
        for (int j=0; j<=b-1; j++)
        {
            if (i==0||i==a-1||j==0||j==b-1)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("The sum of the border elements = %d ", sum);

    return 0;
}
