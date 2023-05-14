#include<stdio.h>
int main()
{
     int t;
      printf("enter the  day numbers");
        scanf("%d",&t);
       switch (t)
       {
       case 1:
       printf("\nSUNDAY is  day of rest of the week");
        break;
       case 2:
        printf("\nMONDAY is  day  to start work with new energy");
        break;
       case 3:
        printf("\nTUSEDAY is day of Lord Hanuman jee");
        break;
       case 4:
         printf("\nWEDNESDAY take risk");
        break;
       case 5:
        printf("\n THURSDAY is best day to buy new products");
        break;
       case 6:
        printf("\n FRIDAY is day of half work");
        break;
       case 7:
        printf("\n SATURDAY is the weekend to roming to new places");
        break;
       default:
       printf("\n please enter a valid choice");
        break;
       }

    
    
    
    return 0;
}