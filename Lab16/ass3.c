//Write a C program to compute determinant of a 3X3 matrix.

#include<stdio.h>

int main()
{
    int r, c, det=0;

    printf("\nPlease enter the size of the matrix(r*c): \n\n");
    scanf("%d %d", &r, &c);

    int A[r][c];


    printf("\nPlease enter the elements of the matrix A: \n\n");
    
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("A [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nThe determinant of matrix A: \n\n");

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            det += (A[0][j]*((A[i+1][j+1])));
        }
    }
}