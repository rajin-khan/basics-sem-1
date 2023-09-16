//

#include<stdio.h>

void printpyr(int x)
{
    for (int i=1; i<=(x/2)+1; i++)
    {
        for (int s=1; s<=(x/2)+1-i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printrpyr(int x)
{
    for (int i=(x/2)+1; i>=1; i--)
    {
        for (int s=1; s<=(x/2)+1-i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("\n");

    printpyr(n);
    printrpyr(n);

    printf("\n");

    return 0;
}