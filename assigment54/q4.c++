#include<iostream>
#include<cstdlib>
using namespace std;
class array
{
     int a[100];
     int top=-1;
     
      public:
       void insertvalue( int value)
       {  
        if(top==99)
        {
            printf("array is full");
            return;
        }
        else
        top++;
         a[top]=value;
       }
        void sort()// sorting in decending order
        {
             for(int i=0; i<=top;i++)
              for(int j=0;j<top;j++)
              {
                 if(a[j+1]>a[j])
                 { int temp;
                  temp=a[j+1];
                  a[j+1]=a[j];
                  a[j]=temp;
                 }
              }
        }
         void print()
         {
            for(int i=0;i<=top; i++)
              cout<<a[i]<<"  ";
         }
          int getSize()
          {
                return top+1;
          }

       
       
};
 int main()
 { array a;
  for( int i=0;i<10;i++)
  a.insertvalue(i*2+3);
 cout<<endl<<" size of the array is "<<a.getSize();
 
  
     return 0;
 }

