/*
2.	Write C program to read a n*n matrix A from user (n is a user input) and print the 
(i) upper left, 
(ii) lower right, 
(iii) upper right, and 
(iv) lower left triangle, 
(v) diagonal and 
(vi) reverse diagonal of A.
*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter n (for n*n matrix): \n");
    scanf("%d", &n);

    int A [n][n];

    printf("Enter the values of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("A [%d, %d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("The upper left of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("The lower right of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (j<n-1-i)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t", A[i][j]);
            }
        }
        printf("\n");
    }

    printf("The upper right of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i<=j)
            {
                printf("%d\t", A[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("The lower left of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            if (j<=i)
            {
                printf("%d\t", A[i][j]);
            }
        }
        printf("\n");
    }


    printf("The diagonal of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            if (j==i)
            {
                printf("%d\t", A[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("The reverse diagonal of the matrix: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (j==n-1-i)
            {
                printf("%d\t", A[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}

