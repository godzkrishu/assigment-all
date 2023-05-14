#include<stdio.h>
 int main()
 {
    int unit,rem;
     printf("enter the  electricity input");
      scanf("%d",&unit);
      if(unit<=50)
      rem=1;
      if(unit<=50)
      rem=1;
      if(unit<=50)
      rem=1;

      
      switch (rem)
      {
      case 1:
      printf("good");
        break;
      case 2:
      printf("better");
        break;
      case 3:
      printf("best");
        break;
      case 4:
      printf("ivallid");
        break;
      default:
        break;
      }
       return 0;
 }