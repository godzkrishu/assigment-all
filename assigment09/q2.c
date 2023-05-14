#include<stdio.h>
int main()
{
     int a,b,t;
      printf("enter the  two numbers");
      scanf("%d%d",&a,&b);
       printf("\n1.Addition");
       printf("\n2.Subtraction");
       printf("\n3.Multiplication");
       printf("\n4.Division");
       printf("\n5.Exit");
       printf("\n Please enter any choice..\n");
        scanf("%d",&t);
       switch (t)
       {
       case 1:
       printf("\n%d is the sum",a+b);
        break;
       case 2:
        printf("\n%d is the subtraction",a-b);
        break;
       case 3:
        printf("\n%d is the multiplication",a*b);
        break;
       case 4:
        printf("\n%d is the division",a/b);
        break;
       case 5:
        printf("\n exited succesfully...");
        break;
       default:
       printf("\n please enter a valid choice");
        break;
       }

    
    
    
    return 0;
}