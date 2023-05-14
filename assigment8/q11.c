#include<stdio.h>
  void main()
  {
     int i ,j,k;
      for(i=1;i<=5;i++)
      { char a='A';
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }
         for(j=1;j<=i;j++)
         {
            printf("%c",a);
            a++;
         }
         
         a--;

         for(j=1;j<i;j++)
         { a--;
            printf("%c",a);
         }
          printf("\n");
      }
  }