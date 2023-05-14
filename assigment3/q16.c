#include<stdio.h>
void main()
{ char  charecter;
    printf(" enter the charecter ");
     scanf("%c",&charecter);
      if(charecter>='A'&&charecter<='Z')
      printf("entered charecter %c is upper case",charecter);

      else if(charecter>='a'&&charecter<='z')
      printf("entered charecter %c is lower case",charecter);
      else if(charecter>='0'&&charecter<='9')
      printf("entered charecter %c is digit ",charecter);
      else
      printf("  entered charecter is a special charecter");
}
