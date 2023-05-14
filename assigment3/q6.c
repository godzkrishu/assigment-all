#include<stdio.h>
void main()
{
     int num1,num2;
      printf(" enter the numbers ");
      scanf("%d%d",&num1,&num2);
      if(num1==num2)
      printf(" the numbers are same");
       else
     printf("%d is greater",(num1>num2?num1:num2));


      
}