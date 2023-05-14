#include<stdio.h>
 int fact( int);
  void main()
  {
     int n,x;
     printf("enter the number to get factorial of number");
     scanf("%d",&n);
     x=fact(n);
     printf(" \n %d is the factorial of %d natural number",x,n);

  }
   int fact(int n)
   {
     int s;
      if (n==1)
      return 1;
       s=n*fact(n-1);
        return s;
   }