#include<stdio.h>
 int main()
 {
     int i ,k,j;
      
      for( i=0; i<=6;i++ )
      {
        char a[13]={'A','B','C','D','E','F','G','F','E','D','C','B','A'};
        for(j=0;j<13;j++)
        { 
            for(k=0;k<2*i-1;k++)
            a[7-i+k]=32; /// 32 is ascii code of space
            printf("%c",a[j]);
        }
        
     printf("\n");
      }
     
       return 0;
 }