//This program will calculate the summation up to an input number.

#include<stdio.h>

int summation(int x); //Since the print fucntion I defined is at the bottom of the code, and most general compilers read top to bottom, I had to include the header of my function before the body of the main function

int main()
{
    int n, ans; //here, n is the local variable of the main function 

    printf("\nThis program will calculate the summation up to the number you enter.\n");

    printf("\nPlease enter the number up to which you would like to add: ");
    scanf("%d", &n);

    ans = summation(n); //This calls the summation function that I made and defined.

    printf("\nThe sum is = %d\n\n", ans);

    return 0;
}
//   the name  arg <- here, any value can be used other than x.
int summation(int x) //This is where the user defined function begins, int x is the argument of the function, and is replaced with whatever number (in this case, n) that I "call" this function with.
{
    //In this function, x is the local variable of the function summation
    int sum=0; //Since the function was defined to be an integer value, it will return an integer value, and so the value (stored in the variable) that will be returned must be declared as the same type (in this case, int).

    printf("\n"); //Just exclude all the print statements if you don't wanna be fancy about it

    for (int i=1; i<=x; i++)
    {
        printf("%d + ", i);
        sum += i;
    }

    printf("\b\b \n");

    return sum; //So when the function is called, the result is going to be the return value, in the main function.
}