#include<stdio.h>
 int main()
 {
     int a,b, i,sum=0; 
      printf("enter the numbers");
      scanf("%d%d",&a,&b);

       for(i=1;i<=a*b;i++)
       {
         if(i%a==0&&i%b==0)
         {
            printf("%d is the LCM of %d and %d",i,a,b);
            break;
         }

       }
      
         return 0;
 }
 