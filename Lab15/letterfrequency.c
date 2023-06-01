/*

Write a program that reads a string from user and then prints the number of times different letters 
appear in that string.
Sample input/output:
Enter a string: Hello how are you?
Frequencies of letters in the input string:
a/A: 1, e/E: 2, h/H: 2, l/L: 2, o/O: 3, r/R: 1, u/U: 1, w/W: 1, y/Y: 1,

*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    char string[100];
    int count;

    printf("\nEnter a string: ");
    scanf("%[^\n]", string);

    for (char let = 'a'; let<='z'; let++)
    {
        count = 0;

        for (int i=0; string[i]!='\0'; i++)
        {
            if (tolower(string[i])==let)
            {
                count++;
            }
        }

        if (count!=0)
        {
            printf("%c/%c : %d ", let, let-32, count);
        }
    }

    return 0;   
}