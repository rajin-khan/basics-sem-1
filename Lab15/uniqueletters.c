/*

//for unique letters and stuff, if you wanna declare an empty array, do this:

unique [0] = '\0', //puts a null character in the first index, so the whole thing is empty.

//so, if you put a character there, it'd go like:
unique[index++] = character; //(which would mean you're putting in a character at that index position, and then post incrementing the index)
unique[index] = '\0';

*/

/*Write a C program to print all unique letters in an input string.
Sample input/output:
Enter a string: Hello how are you?
Unique letters in the input string (ignoring differences between lowercase & uppercase letters):
a, e, h, l, o, r, u, w, y
*/

#include<stdio.h>

int main()

{
    char str[100], unique[100];

    unique[0] = '\0';
    int ind = 0;

    printf("Please enter a string: ");
    scanf("%[^\n]", str);

    for (int i=0; str[i]!='\0'; i++)
    {
        char key = str[i];
        int flag = 1;

        for (int k=0; unique[k]!='\0'; k++)
        {
            if (unique[k]==key)
            {
                flag = 0;
                break;
            }
        }

        if (flag==1)
        {
            unique[ind] = str[i];
            ind++;
            unique[ind] = '\0';
        }
    }

    printf("unique items = %s", unique);

    return 0;
}