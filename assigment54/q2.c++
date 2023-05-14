#include<iostream>
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
        void search( int value)
        {
            for(int i=0;i<=top;i++)
             if(a[i]==value)
             {
                 cout<<value<<" found at "<<i<<endl;
                 return ;
             }
        }
         

       
       
};
 int main()
 { array a;
  for( int i=0;i<10;i++)
  a.insertvalue(i*2+3);
  a.search(7);
     return 0;
 }

