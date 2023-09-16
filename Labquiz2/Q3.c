//Q3

#include <stdio.h>

int main()
{
    int n;

    printf("Please enter the number of rows: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--) //as it is inverted
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c", 'A'+(j-1)); //prints letters serially in the alphabet triangle
        }
        for (int s=1; s<=n-(i); s++) //prints the amount of spaces needed before printing '0'
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++) //the triangle for '0'
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
