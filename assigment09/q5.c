#include<stdio.h>
 int main()
 {
    int var;
     printf("enter the  number");
      scanf("%d",&var);
      switch (var)
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