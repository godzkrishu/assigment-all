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
           int getCapacity()
           {
             return capacity;
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

       
       
};
 int main()
 {    
     Array a;
      for( int i=0;i<10;i++)
      a.insertvalue(i*2+3);
      cout<<endl<<" the capacity of the array is "<<a.getCapacity();
  
  
     return 0;
 }

