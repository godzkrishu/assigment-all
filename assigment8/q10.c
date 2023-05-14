#include<stdio.h>
  void main()
  {
     int i ,j,k;
      for(i=1;i<=4;i++)
      { int count=1;
       for(j=1;j<=5-i;j++)
       {
        printf("%d",count);
        count++;
       }
        for(k=1;k<i;k++)
        {
        printf(" ");
        }
        for(k=2;k<i;k++)
        {
            printf(" ");
        }
         if(i==1)
         count--;
        for(j=1;j<=5-i;j++)
        {  
            if(i==1&&j==4) ///to skip the last digit(0) of the loop
            continue; 
         count--; 
           printf("%d",count);
         
        }
        
         
          printf("\n");
      }
  }