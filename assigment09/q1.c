#include<stdio.h>
 void main()
 {
      int month;
      printf(" enter the month number");
      scanf("%d",&month);
       switch (month)
       {
       case 1:
       printf(" january month has 31 days"); 
        break;
       case 2:
       printf(" february month has 28 days"); 
        break;
       case 3:
       printf(" march month has 31 days"); 
        break;
       case 4:
       printf(" april month has 30 days"); 
        break;
       case 5:
       printf(" may month has 31 days"); 
        break;
       case 6:
       printf(" june month has 30 days"); 
        break;
       
       case 7:
       printf(" july month has 31 days"); 
        break;
       
       case 8:
       printf(" august month has 31 days"); 
        break;
       case 9:
       printf(" september month has 30 days"); 
        break;
       case 10:
       printf(" october month has 31 days"); 
        break;
       case 11:
       printf(" november month has 30 days"); 
        break;
       case 12:
       printf(" december month has 31 days"); 
        break;
       
       default:
       printf(" please enter a valid month nubmer");
        break;
       }


 }