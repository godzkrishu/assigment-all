#include<stdio.h>
 int hcf( int,int);
  void main()
  {
     int n,x;
     printf("enter the numbers to get hcf");
     scanf("%d",&n);
     x=sum(n);
     printf(" \n %d is the sum of %d natural number",x,n);

  }
   int sum(int n)
   {
     int s;
      if (n==1)
      return 2;
       s=2*n+sum(n-1);
        return s;
   }/// to be continue.....