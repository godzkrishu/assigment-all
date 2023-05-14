#include<stdio.h>
#include<string.h>
  int length(char*);
 void main()
 {
     int x;
      char str[50];
      printf(" enter the string to calculate the lenght");
       fgets(str,50,stdin);
       x=length(str);
        printf(" the length of the string is %d",x);

 }
 int length(char *str)
 {
    int i;
    for(i=0;*(str+i);i++);
     return  i-1;
 }

