#include<stdio.h>
void sort( int*,int);
int main()
    { 
        int n;
         printf(" enter the length of string ");
         scanf("%d",&n);
         int a[n];
          printf("enter the string array element");
          for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
         sort(a,n);
           printf("sorted element or array is ");
          for(int i=0;i<n;i++)
            printf("%d",a[i]);
    return 0;
         
    }
    void sort(int *p, int n)
    { int i,j,temp;
         for(i=0;i<n;i++)
         {
            for(j=i+1;j<n;j++)
              if(*(p+j)<*(p+i))              
               {
                 temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
               }
         } 
          
    }
