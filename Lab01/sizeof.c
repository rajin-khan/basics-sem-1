#include<stdio.h>

int main()
{
    int a;
    float b;
    double c;
    long int longInt;
    signed int no;

    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of float: %d bytes\n", sizeof(b));
    printf("Size of long int: %d bytes\n", sizeof(longInt));
    printf("Size of signed int: %d bytes\n", sizeof(no));

    return 0;
}