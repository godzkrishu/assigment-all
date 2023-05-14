#include<stdio.h>
 int digit( int);
  void main()
  {
     int n,x;
     printf("enter the number to get the sum of digit of number ");
     scanf("%d",&n);
     x=digit(n);
     printf(" \n %d is the sum of digit of %d  number",x,n);

  }
   int digit(int n)
   {
     int s, r;
      if (n<10)
      return n;
       r=n%10;
       n=n/10;
       s=r+digit(n);
         return s;
   }