#include<stdio.h>
void swap( int*,int*);
int main()
    { int a,b;
     printf(" enter the two number");
         scanf("%d%d",&a,&b);
       swap(&a,&b);
           printf("%d is a and %d is b string",a,b);
    return 0;
         
    }
    void swap(int *p,int *q)
    { int temp;
    temp=*q;
    *q=*p;
    *p=temp;
    }
