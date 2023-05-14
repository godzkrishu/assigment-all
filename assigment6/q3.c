#include<stdio.h>
 int main()
 {
     int n, i,sum=0; 
      printf("enter the number of terms ");
      scanf("%d",&n);
       for(i=1;i<=2*n;i++)
       { 
        if(i%2!=0||i==1)
         sum=sum+i;
       }
   printf("the sum of the %d  odd natural  numbers is  %d",n,sum);
         return 0;
 }
 