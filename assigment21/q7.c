#include<stdio.h>
  struct time
  {
     int hour, min, sec;
  };
  
 int main()
 {
    struct time t1,t2,diffrence;
     printf(" enter the  1st time ");
     scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
     printf(" enter the  2nd time ");
     scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
       diffrence.hour=t1.hour-t2.hour;
       diffrence.min=t1.min-t2.min;
       diffrence.sec=t1.sec-t2.sec;
        printf("\n the diffrence in two time period is %dhour %dmin %dsec",diffrence.hour,diffrence.min,diffrence.sec);
        return 0;
 }