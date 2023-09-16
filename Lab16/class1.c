

for (int row=0; row<m; row++)
{
    sum = 0;
    
    for (int col=0; col<n; col++)
    {
        sum += array[row][col];
    }

    printf("Sum of row %d is %d", row, sum);
}