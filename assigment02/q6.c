#include<stdio.h>
  int main()
  {
  int n1,n2;
     printf("enter the two number");
      scanf("%d%d",&n1,&n2);
       int greater=(n1>n2)?n1:n2;
        printf(" the greatest number among %d and %d is %d",n1,n2,greater);
         return 0;
        
  }