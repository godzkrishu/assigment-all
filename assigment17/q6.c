
#include<stdio.h>
#include<string.h>
 int main()
 {
     int i=0,j;
      char a[20],temp;
       printf("enter the string");
       scanf("%s",&a);
   j=(strlen(a)-1);
    while(i!=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;
    }
  printf(" the reverse string will be %s",a);
  return 0;
 }