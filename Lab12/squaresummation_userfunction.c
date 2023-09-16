/*
This program will include a function where it will take an integer (n) as a parameter,
and then return the summation of the following series: 4²+7²+10²+... (up to n-th term)
*/

#include<stdio.h>

int nterm(int x); //declaring the function earlier as it was included after the main function

int main()
{
    int n;

    printf("\nThis program will calculate the sum of the following series: 4²+7²+10²+... (up to n-th term).\n");

    printf("\nPlease enter n: ");
    scanf("%d", &n);

    int ans = nterm(n); //calling the function, and storing the answer in a variable so it can be printed

    printf("\nThe sum is = %d\n\n", ans);
      
    return 0;
}

int nterm(int x) //the function body
{
    int i = 4, sum=0, count=1; //both the header and the return values are int, so it is declared as an int function

    while (count<=x)
    {
        sum += (i*i);
        i += 3;
        count++;
    }
    return sum;
}