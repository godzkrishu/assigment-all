
#include<stdio.h>
 int main()
 {
     int i,alpha=0, digit=0,special=0;
      char a[20];
       printf("enter the string");
       scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
 {
   if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='A'))
   alpha++;
  else if(a[i]>='0'&&a[i]<='9')
  digit++;
  else
  special++;

 }
  printf(" the string contain %d apbhabate  and %d digit and %d special charecter %s",alpha,digit,special);
  return 0;
 }