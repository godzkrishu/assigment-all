#include<stdio.h>
void swap( char*,char*,int);
int main()
    { int n;
    
         printf(" enter the length of string ");
         scanf("%d",&n);
          char a[n],b[n];
          printf("enter the string 1");
          scanf("%s",&a);
          printf("enter the string 2");
          scanf("%s",&b);
          swap(a,b,n);
           printf("%s is a and %s is b string",a,b);
    return 0;
         
    }
    void swap(char *p, char *q, int n)
    { int i;
         char temp;
          for(i=0;i<n;i++)
          {
             temp=*(q+i);
             *(q+i)=*(p+i);
             *(p+i)=temp;

          }
    }
