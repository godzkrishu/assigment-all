#include<stdio.h>
 int length(char*);
 void main()
 { int i;
    char str[20];
      printf("enter the array ");
      fgets(str,20,stdin);
      for(i=0;str[i];i++);
      str[i-1]='\0'; /// to remove the new line charechter taken by the fgets funtion at the last of the string
     printf("%d is the length of the string",length(str));
 }
 int length(char *p)
{ int i;
  for(i=0;*(p+i);i++);
  return i;
}

