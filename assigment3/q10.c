#include<stdio.h>
   int main()
   {
       int cost, selling,x;
       printf(" enter the cost and selling price ");
       scanf("%d%d",&cost,&selling);
       x=selling-cost;
        if(x>0)
        {
             printf(" profit of %d percent ",(x*100)/cost);
        }
        if(x<0)
        {
             printf(" Loss of %d percent ",(x*100)/cost);
        }


   }