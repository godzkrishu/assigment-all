#include<stdio.h>
 void  reverse( int*,int);
  void main()
  { 
    int i,n;
   printf("enter the length of the array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    reverse(a,n);
     printf("reverse element of array");
    for(i=0;i<n;i++)
    printf("%d",a[i]);

  }
   void  reverse(int *q, int n)
   { 
    
    int i=0,j=n-1, temp;
   while(i!=j)
   { 
    temp=*(q+i);
   *(q+i)=*(q+j);
   *(q+j)=temp;
   i++;
   j--;
   }


   }