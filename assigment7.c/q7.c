#include<stdio.h>
int main()
{
     int  num1, num2, a,b,i,j,count=0;
    printf(" enter the to numbers ");
     scanf("%d%d",&num1,&num2);
      a=num1<num2?num1:num2;// smaller number bt both
      b=num1>num2?num1:num2; // largest number btw both
     for(i=a+1;i<b;i++)
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
      printf("\n There are total %d prime number bw %d to %d",count,a,b);
      
}