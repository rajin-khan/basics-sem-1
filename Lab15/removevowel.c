/*
Write a C program that reads a string, create a new string containing all the characters the input 
string except the vowels in it, and then prints the new string.

Sample input/output:
Enter a string: Hello how are you?
Output string: Hll hw r y?
*/

#include<stdio.h>

int main()
{
    char string[100], novowel[100];
    int k=0;

    printf("\nPlease enter a string: ");
    scanf("%[^\n]", string);

    for (int i=0; string[i]!='\0'; i++)
    {
        if ((string[i]=='a')||(string[i]=='e')||(string[i]=='i')||(string[i]=='o')||(string[i]=='u')||(string[i]=='A')||(string[i]=='E')||(string[i]=='I')||(string[i]=='O')||(string[i]=='U'))
        {
                continue;
        }
        else
        {
            novowel[k] = string[i];
            k++;
        }
    }

    printf("\nOutput: %s\n\n", novowel);

    return 0;
}