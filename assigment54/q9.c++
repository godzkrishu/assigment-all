#include<iostream>
#include<cstdlib>
using namespace std;
class Array
{
     int* array;
      int size, capacity;
      public:
      Array()
      { array= new int[1];
         size=0;
         capacity=1;
      }
      ~Array()
      { 
        delete[] array;
        size=0;
        capacity=0;

      }
       void insertvalue( int value)
       {  
        if(size==capacity)
        resize();
        array[size]=value;
        size++;
       }
       
         void print()
         {
            for(int i=0;i<size; i++)
              cout<<array[i]<<"  ";
         }
          int getSize()
          {
                return size;
          }
           void resize()
           {
             int * temp= new int[2*size];
             for( int i=0; i<size;i++)
                temp[i]=array[i];
                 delete[] array;
                  array=temp;
                   delete[]temp;
            }
             void search(int value)
             {
                 int i;
                 for( i=0;i<=size;i++)
                 {
                    if(array[i]==value)
                    {
                         cout<<" value found at the index "<<i+1<<endl;
                         break;
                    }
                 }
             }

       
       
};
 int main()
 {     int n;
     Array a;
      for( int i=0;i<10;i++)
      a.insertvalue(i*2+3);
      cout<<" enter the nuber to  find"<<endl;
      cin>>n;
      a.search(n);
  
  
     return 0;
 }

