/*
This program will calculate the sum of the series 1+3+7+15...nᵗʰ term.
Hint: The n-th term is 2*(n-1)+1, where n>=2 and the first term is always 1.
*/


#include<stdio.h>

int main()
{
    int n; //input for the nᵗʰ term

    printf("\nThis program will calculate the sum of the series 1+3+7+15... up to he nᵗʰ term.\n\n");

    printf("Please enter a value of n (>=2): ");
    scanf("%d", &n);

    int sum = 1, term = 0; //the sum and the term that will be updated for every iteration is initialized, sum is set to one as the input starts from the second term

    printf("1 + ");

    for (int i=1, k=1; i<=n-1; i++)
    {
       term = (2*k)+1;
       printf("%d + ", term);
       sum += term;
       k = term; //k is updated to be the value of the previous term
    }

    printf("\b\b = %d\n\n", sum);

    return 0;
}