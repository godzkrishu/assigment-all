#include<stdio.h>
 int main()
 {
    int var,rem;
     printf("enter the  year");
      scanf("%d",&var);
      rem=var%4;
         switch (rem)
      {
      case 1:
      printf("not a leap year");
        break;
      case 2:
      printf("not a leap year");
        break;
      case 3:
      printf("not a leap year");
        break;
      case 0:
      printf("leap year");
        break;
      default:
        break;
      }
       return 0;
 }