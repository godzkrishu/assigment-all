#include<stdio.h>// co prime is that who has only 1 as hcf
int main()
{
     int num1,num2, i,flag=0,hcf=1;
      printf("enter the two  numbers");
       scanf("%d%d",&num1,&num2);
        for( i=2;i<=num1&&i<=num2;i++)
        {
            if(num1%i==0&&num2%i==0)
            {
             hcf=i;
             flag=1;
             break;
            }
        }
if(flag==0)
printf("%d and %d  are co-prime number",num1,num2);
else
printf("%d and %d  are not co-prime number",num1,num2);
return 0;

}