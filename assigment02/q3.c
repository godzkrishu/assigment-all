#include<stdio.h>
 int main()
 {

     int n1,n2;
     printf("enter the two number");
      scanf("%d%d",&n1,&n2);
      // swapping
       printf(" number before swap n1=%d and n2=%d",n1,n2);
       int temp=n1;
         n1=n2;
         n2=temp;
        printf(" number after  swap n1=%d and n2=%d",n1,n2);

 }