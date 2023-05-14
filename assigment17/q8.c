
#include<stdio.h>
 int main()
 {
     int i;
      char a[20],b[20]={0};
       printf("enter the string");
       scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
 {
 b[i]=a[i];
   
 }
  printf(" the copied string will be %s",b);
  return 0;
 }