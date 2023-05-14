#include<stdio.h>
int main()
{
     int a,b,c,t;
      printf("enter the  three numbers");
      scanf("%d%d%d",&a,&b,&c);
       printf("\n1.TO check whether it is side of an isosceles triangle");
       printf("\n2.TO check whether it is side of an right angle triangle");
       printf("\n3.TO check whether it is side of an equilateral triangle");
       printf("\n5.Exit");
       printf("\n Please enter any choice..\n");
        scanf("%d",&t);
       switch (t)
       {
       case 1:
        if(a==b||b==c||a==c)
        printf("it form an isosceles triangle");
        else
        printf(" it does not form isosceles triangle");
        break;
       case 2:
       if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
       printf(" Yes it form the right angle triangle");
       else
       printf("No it does not form right angle triangle");
       break;
       case 3:
       if(a==b&&b==c)
       printf(" Yes it form the equilateral triangle");
       else
       printf("No it does not form equilateraltriangle");
         break;
       default:
       printf("\n please enter a valid choice");
        break;
       }

    
    
    
    return 0;
}