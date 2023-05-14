#include<stdio.h>
 int sqr( int);
  void main()
  {
     int n,x;
     printf("enter the number to get the sum of sqr of numbers ");
     scanf("%d",&n);
     x=sqr(n);
     printf(" \n %d is the sum of %d  of 1st natural number",x,n);

  }
   int sqr(int n)
   {
     int s;
      if (n==1)
      return 1;
       s=n*n+sqr(n-1);
        return s;
   }