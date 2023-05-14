#include<stdio.h>
void main()
{
     int num,k=0;
      printf(" enter the number ");
      scanf("%d",&num);
       while(num!=0)
       { num=num/10;
       k++;
       }
      if(k==3)
       printf(" the number is 3 digit number");
       else 
       printf(" the number is not 3 digit number");


      
}