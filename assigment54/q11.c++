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
             void sort()// sorting in decending order
        {
             for(int i=0; i<size;i++)
              for(int j=0;j<size-1;j++)
              {
                 if(array[j+1]>array[j])
                 { int temp;
                  temp=array[j+1];
                  array[j+1]=array[j];
                  array[j]=temp;
                 }
              }
        }

       
       
};
 int main()
 {    
     Array a;
      for( int i=0;i<10;i++)
      a.insertvalue(i*2+3);
      cout<<" before sortting the array";
      a.print();
       a.sort();
        cout<<" after sorting the array";
        a.print();
  
  
     return 0;
 }

