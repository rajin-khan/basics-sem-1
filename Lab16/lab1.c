#include<stdio.h>

int main()
{
    int rows, columns;

    printf("Enter rows and columns: \n");
    scanf("%d %d", &rows, &columns);

    int A [rows][columns];

    printf("Enter the values of the matrix: \n");

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            printf("A [%d, %d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("The matrix: \n");

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    int rowb = columns;
    int colb = rows;

    int B [rowb][colb];

    for (int i=0; i<rowb; i++)
    {
        for (int j=0; j<colb; j++)
        {
            B[i][j]=A[j][i];
        }
    }

    printf("The transpose matrix: \n");

    for (int i=0; i<rowb; i++)
    {
        for (int j=0; j<colb; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }


    return 0;
}