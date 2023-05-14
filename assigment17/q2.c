#include<stdio.h>
 #include<string.h>
void main()
{
     int i, count=0;
      char str[20],t; 
       printf("enter the string"); 
       fgets(str,20,stdin);
        printf("enter the charecter to count its occurance in the string");
        scanf("%c",&t);
       for(i=0;str[i];i++)
 {
     if(str[i]==t)
     count++;
 }
  printf("the %c occure %d times ",t,count);
}