
#include<stdio.h>////fibbo 1,1,2,3,4,5
int main()
{
     int n,i,t1=1,t2=2,tnext;
      printf(" enter the  terms of fobbo series");
      scanf("%d",&n);
       printf("%d %d",t1,t2);
      if(n==1)
      {
        printf("\n%d is found  in series %d",n,t2);
      }
       else{
       for(i=3;1;i++)
       {  
        tnext=t1+t2;
       t1=t2;
       t2=tnext;
       printf(" %d",tnext);
        if(tnext==n)
       {
        printf(" \n%d  term is found in series",n);
        break;
       }
       
       if(tnext>n)
       {
         printf(" \n%d  term is not found in series",n);
         break;
       }
      
      }
       }
       
}