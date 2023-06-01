#include<stdio.h>
 int main()
 {
     int n;

     printf("Enter n: ");
     scanf("%d",&n);

     int count=0;

     for(int i=1;i<=(n/2)+1;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(j==(n/2)+1+count || j==(n/2)+1-count)
                printf("*");
                else
                printf(" ");
    
         }
         printf("\n");
         count++;
     }

     count=count-2;


     for(int i=1;i<=(n/2);i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(j==(n/2)+1+count || j==(n/2)+1-count)
                printf("*");
                else
                printf(" ");
    
         }
         printf("\n");
         count--;
     }
     return 0;
 }