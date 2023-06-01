/*
Write C program to read two r*c matrices A and B from user (r, c are user inputs)
and print the matrix 5A+7B+9 (add 9 with each element of the matrix 5A+7B to get the resultant matrix).
*/

#include<stdio.h>

int main()
{
    int r, c;

    printf("\nPlease enter the size of the matrix(r*c): \n\n");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];


    printf("\nPlease enter the elements of the matrix A: \n\n");
    
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("A [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nPlease enter the elements of the matrix B: \n\n");
    
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("B [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nThe matrix 5A+7B+9: \n\n");

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("%d\t", (5*A[i][j]+7*B[i][j]));
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}