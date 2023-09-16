//Write C program to count the number of capital letters and the number of small letters in an input string and print those numbers.

#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[100];

    int cap = 0, small = 0;

    printf("\nThis program will take your input and count the number of capital and small letters in it.\n\n");

    printf("Type anything : ");
    scanf("%[^\n]", str);

    for (int i=0; str[i]!='\0'; i++)
    {
        if (isupper(str[i]))
        {
            cap++;
        }
        else
        {
            small++;
        }
    }

    printf("\nThe number of capital letters in %s is: %d\n", str, cap);
    printf("and the number of small letters is: %d\n\n", small);

    return 0;
}