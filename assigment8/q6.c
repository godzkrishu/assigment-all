#include<stdio.h>
 int main()
 {
     int i ,k,j;
      for( i=5; i>=1;i-- )
      {
         for(k=5;k>i;k--)
         {
             printf(" ");
         }

        for(j=1;j<=2*i-1;j++)
        {
            printf("*"); 
        }
        
     printf("\n");
      }
     
       return 0;
 }