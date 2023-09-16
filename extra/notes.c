//you can use exit(*a number*) to exit the entire program, sort of works like return, but return exits a function, whereas exit exits the whole program.

/*

STUDENT INFO:

    name
    student id
    (major)
    (CGPA)
    address
    contact info
    attendance * (update if regular or regular)

*/

#include<stdio.h>

int main()
{
    char str[12];

    scanf("%[^\n]", str);

    for (int i=0; str[i]!='\0'; i++)
    {
        int flag = 1;

        if (!(str[i]<='9' && str[i]>='0'))
        {
            flag = 0;
            printf("Invalid contact number. Please re-enter your number.");
            break;
        }
        else if (flag ==1 && i==10)
        {
            printf("your number has been stored.");
        }
    }

    return 0;
}



