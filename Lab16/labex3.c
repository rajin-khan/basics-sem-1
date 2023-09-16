//Write C program to read a r*c matrix A from user (r, c are user inputs) and print the sum of even numbers in A.

#include<stdio.h>

int main()
{
    int r, c, sum=0;

    printf("\nPlease enter the size of the matrix (r*c): \n\n");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("\nPlease enter the values of the matrix: \n\n");

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("Matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is: \n\n");

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (matrix[i][j]%2==0)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("\nThe sum of the even numbers in the matrix = %d\n\n", sum);

    return 0;
}