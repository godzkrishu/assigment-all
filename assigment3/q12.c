#include<stdio.h>
void main()
{ char  charecter;
    printf(" enter the charecter ");
     scanf("%c",&charecter);
      if(charecter>='A'&&charecter<='Z')
      printf("entered charecter %c is upper case",charecter);

      else if(charecter>='a'&&charecter<='z')
      printf("entered charecter %c is lower case",charecter);
      else
      printf(" plese enter a valid charecter");
}