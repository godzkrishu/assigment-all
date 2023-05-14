#include<stdio.h>
int main()
{
     int i,j,count=0;
     for(i=2;i<=100;i++)
     { int flag=0;
         for(j=2;j<i;j++)
         {
            if(i%j==0)
            {
            flag=1;
           break;
            }
         }
          if(flag==0)
          {
          printf(" %d",i);
           count++;
          }
     }
      printf("\n There are total %d prime number bw 1 to 100",count);
      
}