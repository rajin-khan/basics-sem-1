//Q2

#include <stdio.h>
#include<math.h>

int main()
{
    int n;

    float sum=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i+=3) //the difference in the sequence is +3
    {
        if (i%2==0) //As the series is 1, √4, 7, √10, 13, √14..., all the even numbers have a square root
        {
            sum += pow(i, 1.0/2); //sqrt can be used instead
        }
        else
        {
            sum += i; //the odd numbers are added as is
        }
    }

    printf("Sum = %.2f", sum); //as the question output was in two decimal places

    return 0;
}
