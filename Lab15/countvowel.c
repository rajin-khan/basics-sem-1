//Write a C program that counts the number of vowels in an input string.

#include<stdio.h>

int main()
{
    char string[100];
    int vowel=0;

    printf("\nPlease enter a string: ");
    scanf("%[^\n]", string);

    for (int i=0; string[i]!='\0'; i++)
    {
        if ((string[i]=='a')||(string[i]=='e')||(string[i]=='i')||(string[i]=='o')||(string[i]=='u')||(string[i]=='A')||(string[i]=='E')||(string[i]=='I')||(string[i]=='O')||(string[i]=='U'))
        {
            vowel++;
        }
    }

    printf("\nThe number of vowels in your string is: %d\n\n", vowel);

    return 0;
}