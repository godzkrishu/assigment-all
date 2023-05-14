#include<stdio.h>
 int simple( int p, int r, int t);
 int main()
 { int p, r,t,si;
  printf(" enter the p and r and t=");
   scanf("%d%d%d",&p,&r,&t);
    si=simple(p,r,t);
    printf("%d is the simple intrest");
    return 0;
 }
  int simple( int p, int r, int t)
  {
    return ((p*r*t)/100);
  }