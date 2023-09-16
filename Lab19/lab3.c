//3. Reading from a text file:

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;

    fp = fopen("file.rtf", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error");
        return 1;
    }

    char c;

    while ((c=fgetc(fp))!=EOF)
    {
        putchar(c);
    }

    fclose(fp);
}
