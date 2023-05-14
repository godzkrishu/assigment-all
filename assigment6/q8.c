#include<stdio.h>
 int main()
 {
     int n, i,flag=0; 
      printf("enter the number  ");
      scanf("%d",&n);
       for(i=2;i<=n/2;i++)
       { 
        if(n==1)
        {
             printf(" 1 is nither composite nor prime");
             break;
        }
        if(n%i==0)
        {
           flag=1;
           break;
        }

         
       }
        if(flag==1)
         printf(" number is composite");
        
        else
         printf(" number is prime");
 }
 