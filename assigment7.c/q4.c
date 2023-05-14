#include<stdio.h>
int main()
{
     int num1,num2, i,hcf=1;
      printf("enter the two  numbers");
       scanf("%d%d",&num1,&num2);
        for( i=2;i<=num1&&i<=num2;i++)
        {
            if(num1%i==0&&num2%i==0)
            {
             hcf=i;
            }
        }
printf("%d is the hcf of the %d and %d",hcf,num1,num2);
return 0;

}