#include<stdio.h>
 int max(int*,int*);
 void main()
 {
     int a,b;
      printf("enter the two numbers ");
      scanf("%d%d",&a,&b);
      printf("%d is maximum",max(&a,&b));

 }
 int max( int *p, int *q)
{
     return (*q>*p?*q:*p);
}