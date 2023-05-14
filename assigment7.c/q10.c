#include<stdio.h>
int main()
{
      int i,t,sum=0,rem;
       for( i=1;i<=1000;i++)
       {  sum=0;
         t=i;
        while(t!=0)
        { 
            rem=t%10;
            sum=sum+rem*rem*rem;
            t=t/10;  
        }
        if(sum==i)
        printf(" %d",sum);

       }
       
}