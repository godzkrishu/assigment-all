#include<iostream>
#include<string.h>
 using namespace std;
 void reverse( char*);
 int main()
 { 
 char  str[200];
 cout<<"enter the string to reverse";
     fgets(str,200,stdin);
     reverse(str);
      cout<<str;
return 0;

 }
  void reverse( char *p)
  { int i=0, n,j;
  char temp;
  for(n=0;*(p+n);n++);
  j=n-2;//2 is subtracted becouse the remove new line chareter taken by fgets in last of the strings
  while(i!=j)
  {  temp=*(p+i);
  *(p+i)=*(p+j);
  *(p+j)=temp;
  i++;
  j--;
 }

  }