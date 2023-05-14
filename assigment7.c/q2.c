///  i am using a completly diffrent method to generate fibbo series
#include<stdio.h>
int main()
{
     int n,i,t1=1,t2=2,tnext;
      printf(" enter the number of terms of fobbo series");
      scanf("%d",&n);
       int  b[n];
       b[0]=1;
       b[1]=1;
      
       for(i=3;i<=n;i++)
       { tnext=t1+t2;
       t1=t2;
       t2=tnext;
       b[i-1]=tnext;
        
       }
        for(i=0;i<n;i++)
        {
            printf(" %d",b[i]);
        }

}