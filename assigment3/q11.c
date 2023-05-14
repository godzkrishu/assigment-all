#include<stdio.h>
int main()
{
     int a,b,c,d,e,total;
     printf(" enter the number of 5 suject");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     total=(a+b+c+d+e)/5;
      if(total>=33)
      printf("%d student has passed the exam",total);
      if(total<33)
      printf("%d student has failed in exam",total);
      return 0;
}
