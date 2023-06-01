//This program will print all even numbers between m and n (m, n are user inputs) in reverse order.

#include<stdio.h>

int main()
{
    int m,n;

    printf("\nThis program will print all even numbers between m and n, in reverse.\n");

    printf("\nPlease enter the values of m and n:\n");
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("All the even numbers between %d and %d, in reverse order, are: ", m, n);
   
    for (int i=n; i>=m; i-=2) //as it is in the reverse order, the counter is initialized from the upper bound, and decremented by 2
    {
        if ((i%2)!=0) //this makes sure that if the user inputs an odd number, the number is decremented by 1 as it will give us the closest even number that is less than the maximum number
        {
            i--;
            printf("%d ", i);
        }
        else
        {
            printf("%d ", i);
        }
    }

    printf("\b. \n\n");

    return 0;
}