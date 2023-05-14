#include<stdio.h>
int sum(int*,int);
void main()
{ 
      int i,n,x;
   printf("enter the length of the array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     x=sum(a,n);
     printf("\n %d is the sum of all element of the array",x);
}
int sum( int *q,int n)
{
    int sum=0,i;
     for(i=0;i<n;i++)
      sum=sum+*(q+i);
       
       return sum;   
}