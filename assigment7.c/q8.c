#include<stdio.h>
int main()
{
     int i,j,num;
      printf("enter the number");
      scanf("%d",&num);
     for(i=num+1; ;i++)
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
          printf(" %d is the next  prime number after %d",i,num);
           break;
          }
     }
      
}