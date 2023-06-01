for (int i=0; i<row; i++)
{
    sum += A[i][i];

    revsum += A[i][j-column-1];
}

/*
for (int i=0; i<row; i++)
{
    for (int j=column-1; j>=0; j--)
    {
        sum += A[i][j];
    }
}
*/
