#include<stdio.h>
 int main()
 {
     int i ,k,j;
      for( i=4; i>=1;i-- )
      {  char a='@';// becouse it has ascii code 64 just before the 'A' ascii 65
         for(k=1;k<=4-i;k++)
         {
             printf(" ");
         }

        for(j=1;j<=i;j++)
        {   a++;
            printf("%c",a); 
            
        }
        for(j=i-1;j>=1;j--)
        {  a--;
            printf("%c",a);
        }
        
     printf("\n");
      }
     
       return 0;
 }