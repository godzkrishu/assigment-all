#include<stdio.h>
 void main()
 {
     int a,b,c, greatest;
      printf(" enter the three  numbers");
       scanf("%d%d%d",&a,&b,&c);
        greatest=a>b?(a>c?a:c):(b>c?b:c);
         if(greatest==a&&greatest==b||greatest==c&&greatest==b||greatest==a&&greatest==c)
         {
            printf("%g is greatest and it appears more than one time",greatest);
         }
        else 
        printf(" %d is greatest and appears only  one time ",greatest);
 }