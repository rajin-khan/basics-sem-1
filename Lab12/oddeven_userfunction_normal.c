//This program will show whether a given number is odd or even (void function example)

#include <stdio.h>

void oddeven(int x) //The user defined fucntion is written at the top, so this is fine, but if it was written under the main function, we would've had to declare it
{
    if(x%2==0)
    {
        printf("\n%d is an even number.\n\n", x);
    }
    else       
    {
        printf("\n%d is an odd number.\n\n", x);
    }
} 
//Here, since it is a void function, there is no return value. Void functions are usually used when there is no computing value to be returned, and void functions usually include stuff with printf

int main()
{
    int m;

    printf("\nEnter an integer: ");
    scanf("%d", &m);

    oddeven(m);

    return 0;
}