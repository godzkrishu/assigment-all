#include<stdio.h>
 int sum( int);
  void main()
  {
     int n,x;
     printf("enter the number to get the sum of odd numbers ");
     scanf("%d",&n);
     x=sum(n);
     printf(" \n %d is the sum of %d natural number",x,n);

  }
   int sum(int n)
   {
     int s;
      if (n==1)
      return 1;
       s=(2*n-1)+sum(n-1);
        return s;
   }