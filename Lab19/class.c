/*
This will copy the content of a file in the lab folder and then create a new one with the copied content. 
Alternatively, you can take a character array input of the file path to locate the file,
and then copy the data from that file and then later copy it to the new file whose name you can read as well.
*/

#include<stdio.h>

int main()
{
    FILE *fp, *fp2;
    int c;
    char content[50], filepath[50];

    fp = fopen("Untitled.rtf", "r"); //opens the first file in read mode

    if (fp == NULL)
    {
        printf("Error in opening input file/the file you want to copy from");
        return (-1);
    }

    fp2 = fopen("Untitled2.rtf", "w"); //creates the new file in w mode
    /*
    if you wanted to store in the same place where user input his/her directory, then just put that input character array, with strcat, 
    into a new character array, like this:
    char filepathnew[50];
    (remember to include stirng library)
    strcat(filepath, "2"); <- this will copy the old file path, for example untitled, and when you put this filepathnew in place of untitled2,
    it will create a new file with the old file name and add 2 to it.
    */

    if (fp2 == NULL)
    {
        printf("Error in opening/creating the file you want to write to/copy stuff to");
        return (-1);
    }

    while (1)
    {
        fgets(content, 50, fp); //copies the content into this character array
        fprintf(fp2, "%s", content); //copies that same thing into the new file
        
        if (feof(fp)) //if you find the end of file pointer of the first file, it stops reading the whole thing, exits the loop.
        {
            break;
        }
    }

    fclose(fp); //closes the input files
    fclose(fp2); //closes the output file


    return 0;
}