//This program will check if a given number is positive, negative, or zero

#include<stdio.h>

int checknumber(int x);

int main()
{
    int n;

    printf("\nThis program will check if a given number is positive, negative, or zero.\n");

    printf("\nPlease enter a number: ");
    scanf("%d", &n);

    int ans = checknumber(n); //The function is called

    if (ans==1) //Since a non-void function was used, we have use the return value to make up our own print statements.
    {
        printf("\n%d is a positive number.\n\n", n);
    }
    else if (ans==-1)
        {
            printf("\n%d is a negative number.\n\n", n);
        }
    else
    {
        printf("\nYour number is zero.\n\n");
    }

    return 0;
}

int checknumber(int x) //Here, a void function would've made more sense, but lab instructions were to use a non-void function
{
    int checknum;
    if (x>0)
    {
        checknum = 1;
    }
    else if (x<0)
        {
            checknum = -1;
        }
    else
    {
        checknum = 0;
    }
    
    return checknum; //Here, the function, when called, would return a the value of the variable checknum
}