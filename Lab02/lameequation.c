
//This program will calculate the value of 5x3-4x2+√(x)+3, taking x from the user.

#include<stdio.h>
#include<math.h>

int main() {

    float a, b, c, x, ans;

    printf("This program will calculate the value of 5x²-4x²+√(x)+3.\n");

    printf("Please enter a value of x:");
    scanf("%f", &x);

    a = 5*(pow(x,2));
    b = 4*(pow(x,2));
    c = sqrt(x);
    
    ans = a-b+c+3;

    printf("The answer is = %.2f\n",ans);
    
    return 0;
}