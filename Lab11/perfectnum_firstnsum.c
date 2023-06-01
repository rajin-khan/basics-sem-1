//This program will compute and print the sum of the first n perfect numbers.

#include<stdio.h>

int main()
{
    int n;
    long long summation = 0;

    printf("\nThis program will compute and print the sum of the first n perfect numbers.\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    int count=0;
    int i=1;

    while (count<n)
    {
        int sum = 0;

        for (int k=1; k<=(i/2); k++)
        {
            if (i%k==0)
            {
                sum += k;
            }
        }
        if (i==sum)
        {
            count++;
            printf("%d + ", i);
            summation += i;
        }
        i++;
    }

    printf("\b\b= %lld\n\n", summation);

    return 0;
}