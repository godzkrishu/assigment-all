#include<stdio.h>// fibbo series 1,1,2,3,5,8,13
 int main()
 {
      int n,i, t1=1,t2=1, tnext;
      printf(" enter the term no of series");
      scanf("%d",&n);
      printf("%d %d",t1,t2);
      if(n==1||n==2)
      {
        printf("%dth term is %d",n,t2);
      }

      else{
      printf("%d %d",t1,t2);
       
       for(i=3;i<=n;i++)
       { 
        tnext=t1+t2;
         t1=t2;
        t2=tnext;
        printf(" %d",tnext);
       
       }
      printf(" \n %d is the %d th term of fibbo series",tnext,n);
      }
return 0;
 }