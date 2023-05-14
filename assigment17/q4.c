
#include<stdio.h>
 int main()
 {
     int i;
      char a[20];
       printf("enter the string");
       scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
 {
   if(a[i]>='a'&&a[i]<='z')
   {
    a[i]=a[i]-32;
   }
 }
  printf(" the string in upper case will be %s",a);
  return 0;
 }