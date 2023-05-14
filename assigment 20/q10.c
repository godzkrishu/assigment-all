#include<stdio.h>
 void  reverse( char*,int);
  void main()
  { int i;
    char str[200];
    printf("enter the string");
    fgets(str,200,stdin);
      for(i=0;str[i];i++);
      str[i-1]='\0';
     reverse(str,i-1);
     printf("reverse element of array");
    printf("\n %s",str);

  }
   void  reverse(char *q, int n)
   { 
    
    int i=0,j=n-1;
    char temp;
   while(i!=j)
   { 
    temp=*(q+i);
   *(q+i)=*(q+j);
   *(q+j)=temp;
   i++;
   j--;
   }


   }