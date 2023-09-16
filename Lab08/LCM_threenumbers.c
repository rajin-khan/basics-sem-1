//This program will read 3 integers and compute their LCM.

#include<stdio.h>

int main() {

    int a, b, c, i, max, lcm=0;

    printf("\nThis program will read 3 integers and compute their LCM.\n\n");

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a>=c)&&(a>=b)) { //checks whether a is the highest
    
        max = a;
    }
    else if ((b>=c)&&(b>=a)) { //checks whether b is the highest
    
        max = b;
    }
    else if ((c>=b)&&(c>=a)) { //you get it.
    
        max = c;
    }
    
    i = max;
    
    while (1) {

        if (((i%a)==0)&&((i%b)==0)&&((i%c)==0)) { //if i is a multiple of both a, b and c then i is the LCM of a, b, and c
        
            lcm = i;
            break; 
        }
        
        i += max;
    }

    printf("\nThe LCM of %d, %d, and %d is = %d\n\n", a, b, c, lcm);

    return 0;
}