
#include<stdio.h>
 int main()
 {
     int i,count=0;
      char a[20];
       printf("enter the string");
       scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
 {
   if(a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117||a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==85)
   count++; 
 }
  printf("no of vowel in the string is %d",count);
  return 0;
 }