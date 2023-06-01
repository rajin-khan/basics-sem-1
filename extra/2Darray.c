#include<stdio.h>

int main()
{
    int m, n;
    char opr;

    printf("Enter the rows and columns of the matrices you would like to perform your calcuations with (r x c): ");
    scanf("%d %d",  &m, &n);

    int A[m][n], B[m][n], C[m][n];


    printf("\n\nEnter matrix A: ");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("\nA (%d, %d): ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n\nEnter matrix B: ");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("\nB (%d, %d): ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nYour entered matrices are: ");

    printf("\n\nMatrix A: \n\n");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B: \n\n");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nWhat would you like to do with these matrices?\n");

    printf("\nAdd: (Enter '+')\n");
    printf("Subtract: (Enter '-')\n\n");

    scanf(" %c", &opr);

    switch (opr)
    {
        case '+':

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                C[i][j] = ((A[i][j])+(B[i][j]));
            }
        }

        printf("\nYour resultant matrix is: \n\n");

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
        
        break;

        case '-':

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                C[i][j] = ((A[i][j])-(B[i][j]));
            }
        }

        printf("\nYour resultant matrix is: \n\n");

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
        
        break;
    }

    printf("\n\n");

    return 0;  
}