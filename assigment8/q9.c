#include<stdio.h>
 int main()
 {
     int i ,k,j;
      for( i=4; i>=1;i-- )
      { 
         for(k=1;k<=4-i;k++)
         {
             printf(" ");
         }

        for(j=1;j<=i;j++)
        {
            printf("%d",j); 
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        
     printf("\n");
      }
     
       return 0;
 }