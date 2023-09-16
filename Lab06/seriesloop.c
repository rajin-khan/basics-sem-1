//This program will compute the sum of the following series using while loop: 5²+9²+15²+23²+....+n²

#include <stdio.h>
#include<math.h>

int main() {

    int n, diff, sum; //Common difference between the series, sum of the entire series

    printf("\nThis program will compute the following series: 5²+9²+15²+23²+....+n².\n");

    printf("\nPlease enter a value of n: ");
    scanf("%d", &n);

    sum = 0;
    diff = 4;

    int i = 5; //The counter is initialized from 5
    
    while (i<=n) {

        printf("%d² + ", i);
        sum += pow(i, 2);
        i += diff; //The difference is added
        diff += 2; //Difference is increased by 2 each time according to the series
    }

    printf("\b\b= %d\n\n", sum); //Formatting to make it look pretty, you can figure it out 

    return 0;
}