#include<stdio.h>
 void main()
 {
     int x;
      printf("enter the nubmer");
      scanf("%d",&x);
       if(x%2==0&&x%3==0)
       printf(" entered number is divisible by both 2 and 3");
       else
        printf("entered number is not divisible by both 2 and 3");
 }