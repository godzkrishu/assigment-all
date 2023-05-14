#include<iostream> // reverseing the array
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
        void reverse()// reversing the array
        { 
            int i=0,j=top, temp;
       
             while( i<j)
             { 
                temp=a[i];
               a[i]=a[j];
               a[j]=temp;
                i++;
                j--;
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
   a.print();
 cout<<endl<<" size of the array is "<<a.getSize();
 a.reverse();
  cout<<" the reversed array is "<<endl;
  a.print();
 
  
     return 0;
 }

