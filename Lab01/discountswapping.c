#include<stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Please input the value of a:");
    scanf("%d", &b);
    printf("Please input the value of b:");
    scanf("%d", &a);

    printf("The old value of a is: %d\n", b);
    printf("The old value of b is: %d\n\n", a);

    printf("After Swapping,\n");
    printf("The new value of a is: %d\n", a);
    printf("The new value of b is: %d\n", b);

    return 0;

}
