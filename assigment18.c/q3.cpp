#include<iostream>
using namespace std;
int compare(char*,char*);
int main()
{ 
     int x;
     char a[50],b[20];
     cout<<"enter the two string";
     fgets(a,50,stdin);
     fgets(b,50,stdin);
     x=compare(a,b);
     if(x==1)
     cout<<"both string are diffrent";
     //if(x==0)
     else
     cout<<"both string are same";


}
 int compare( char *q,char *p)
 {
     int i,flag=0;
    while(*(p+i))
    { if(*(p+i)!=*(q+i))
         flag++;
         i++;
    }
         return flag;
 }