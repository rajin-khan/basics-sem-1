/*
Write a function that searches for a character in a string. 
The function should print true if found, otherwise print false.
*/

#include<stdio.h>

void searchar(char array[], char key)
{
    for (int i=0; array[i]!='\0'; i++)
    {
        if (array[i]==key)
        {
            printf("Found\n\n");
            break;
        }
        else
        {
            printf("Not found\n\n");
        }
    }
}

int main()
{
    char string[100], key;

    printf("Enter string: ");
    scanf("%[^\n]", string);

    printf("Search key: ");
    scanf(" %c", &key);

    searchar(string, key);

    return 0;
}