#include<stdio.h>

int main()
{
    int A [3][5];

    printf("Enter the values of the 3*5 matrix: \n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("A [%d, %d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    float n;

    printf("The original matrix: \n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Enter a number: ");
    scanf("%f", &n);

    printf("The new matrix: \n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%.f\t", n*A[i][j]);
        }
        printf("\n");
    }
}