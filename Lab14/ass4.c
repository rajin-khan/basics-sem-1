/*
Write a program that reads the size and elements of an float array from user,
and then computes the average of the numbers in it and prints it.
Then it should compute number of elements which are greater than average and prints those elements.
Sample input/output: 
Enter array size: 5
Enter elements: 12  13  16  15  14
Average = 14.000000, The elements greater than average are: 16, 15
*/

#include<stdio.h>

int main()
{
    int n;

    printf("\nPlease enter the size of your array: ");
    scanf("%d", &n);

    float array[n], sum = 0, avg;

    printf("\nPlease enter the elements of your array: \n\n");

    for (int i=0; i<n; i++)
    {
        scanf("%f", &array[i]);
        sum += array[i];
    }

    avg = sum/(float)n;

    printf("\nThe average is %f,\n", avg);

    printf("and the elements greater than average are: ");

    for (int i=0; i<n; i++)
    {
        if (array[i]>avg)
        {
            printf("%.f, ", array[i]);
        }
    }

    printf("\b\b \n\n");

    return 0;
}