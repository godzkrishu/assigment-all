#include<stdio.h>
 int check( int n);
 int main()
 { int n,answer;
  printf("eneter the numer =");
   scanf("%d",&n);
   answer=check(n);
   printf("%d",answer);
 }
  int check( int n)
  {
    if(n%2==0)
    {return 1;}
    else{return 0;}
  }