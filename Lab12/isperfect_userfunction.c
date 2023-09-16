//This program will use a user-defined function to check if a given number is a perfect number.

#include<stdio.h>

int isperfect(int x);

int main()
{
    int n;

    printf("\nPlease enter a number: ");
    scanf("%d", &n);

    int ans = isperfect(n);

    if (ans==1) //compares the value of the flag and prints accordingly, so in theory, you could've set 69 to be true and 420 to be false, but just be smart about it
    {
        printf("\n%d is Perfect Number.\n\n", n);
    }
    else if (ans==0)
        {
            printf("\n%d is not a Perfect Number.\n\n", n);
        }

    return 0;
}

int isperfect(int x)
{
    int sum = 0, perfect = 0; //'perfect' is the flag, initially set to 0, so false

    for (int k=1; k<=(x/2); k++)
    {
        if (x%k==0)
        {
            sum += k;
        }
    }
    if (x==sum)
    {
        perfect = 1; //if the number is perfect, the flag becomes 1, so true
    }

    return perfect; //returns the value of the flag after checking
}