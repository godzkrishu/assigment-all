#include<stdio.h>
 void main()
 {
     int x;
      printf("enter the nubmer");
      scanf("%d",&x);
       if(x%7==0)
       printf(" entered number is divisible by 7");
       else if(x%3==0)
       printf(" entered number is divisible by 3");
       else
        printf("entered number is not divisible by both 7 and 3");
 }