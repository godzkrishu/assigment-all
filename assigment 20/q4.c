#include<stdio.h>
void main()
{
     int a=5,b=6, *p,*q,**s,***z;
     p=&a;
     q=&b;
     s=&q;
     z=&s;
     printf("these are the values of pointer ");
     printf("\n%d=***z",***z);
     printf("\n%d=*z",*z);
     printf("\n%d=*q",*q);
     printf("\n%d=**s",**s);
}