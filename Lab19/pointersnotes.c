/*
POINTERS

address variables are usually stored as hexadecimal values, so starts with '0x', so example: 0xFFDA3B

char *p //p can store the address of a character type variable
int *x //x can store the address of a int type variable (you get it)

then, you can:

p = &ch; 

and now p would store the address of the variable ch, as the ampersand variable stores the address of a certain variable

alternatively, you could do it one line too:

char *p = &ch;

if a variable takes up, say 4 bytes, then the address of that variable would be the first byte that is used to store it.

and important thing, NEVER not initialize a pointer. it could contain the address of something very imporant and then change that stuff.

so usually, you would initialize it like this:

int *numberPtr = NULL;
or,
int *numberPtr;
numberPtr = NULL;


now, * has another use, as a "dereferencing" operator.

for example, 

int *ptr = 20; //stores the address of 20.

then, if you do

*ptr = 16; //then it will change the value of the variable at the memory location of 20
so, the in the previous line, if you've already declared the pointer, then doing this would be the same as using num = 16

*/