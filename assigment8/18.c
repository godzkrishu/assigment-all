#include<stdio.h>
 void main()
 {
    int i,j;
     for(i=1;i<=5;i++) // for upper triangle
     { 
         for(j=1;j<=5-i;j++)
     {
      printf(" ");
     }
        for(j=1;j<=i;j++)
        { 
            printf("*");
        }
        for(j=1;j<i;j++)
        { 
           printf("*");
        }
        printf("\n");
     }
     for(i=5;i>=1;i--)///for lower triangle
     { 
         for(j=1;j<=5-i;j++)
     {
      printf(" ");
     }
        for(j=1;j<=i;j++)
        { 
            printf("*");
        }
        for(j=1;j<i;j++)
        { 
           printf("*");
        }
        printf("\n");
     }
 }