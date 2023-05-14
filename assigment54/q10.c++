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
             void reverse()// reversing the array
        { 
            int i=0,j=size-1, temp;
       
             while( i<j)
             { 
                temp=array[i];
               array[i]=array[j];
               array[j]=temp;
                i++;
                j--;
             }
             
        }

       
       
};
 int main()
 {    
     Array a;
      for( int i=0;i<10;i++)
      a.insertvalue(i*2+3);
      cout<<" before reverse"<<endl;
      a.print();
      a.reverse();
       cout<<" after reverse "<<endl;
       a.print();
  
  
     return 0;
 }

