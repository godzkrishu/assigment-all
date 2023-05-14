/// creating abstract data type without using STL
#include<iostream>
 using namespace std;
  class dynamicarray
  {
     int size, capacity;
      int *array; 
       public:
        
         dynamicarray()
         {   array =new int[1]; // initialing the  dynamic array
             size=0;
             capacity=1;
         }
         ~dynamicarray()
         {  delete[] array;
             size=0;
             capacity=0;
             
         }
          void insert( int value)
          {  if( capacity==size)
               resize();
                array[size]=value;
                size++;

            
          }
           void insertAt( int index, int value)
           { if(size==capacity)
                resize(); // becouse we have to incerase the size of array
              for( int i=size; i>=index; i--)
                array[i]=array[i-1];
                 array[index]=value;
                 size++;
                 
           }
            void resize()
            { 
                int *temp= new  int[2*size];
                 for( int i=0; i<size; i++)
                    temp[i]=array[i];
                     delete []array;
                      array=temp;
                      capacity=2*size;
                      delete[]temp;
            }
             void deleteByvalue( int value)
             {  int index ,i;
                for(i=0;i<size; i++)
                   if(array[i]==value)
                    {index=i;// saving address
                          break;
                       }
                   for( i=index; i<size-1;i++)
                   {
                    array[i]=array[i+1]; // shiftting the number towords left from index
                   }  
                   array[size]=0; // putting 0 at last element
                    size--;
                     cout<<" deletion successfull";
             }
              void deleteByindex( int index)
              {
                 for(int i=index;i<size-1; i++) //shifting the elemnet towords left
                  array[i]=array[i+1];
                  array[size]=0; //  making memory of last index free 
                 size--; /// deleting the the last element  by decreasing the size
              }
               void shrinktofit()
               { int *temp;
                temp=new int[size];
                for( int i=0; i<size;i++)
                  temp[i]=array[i];
                  capacity=size;
                   delete[]array;
                    array=temp; // transfering the address
                     delete []temp;
               }
                void printall()
                { cout<<endl;
                     for(  int i=0; i<size;i++)
                      cout<<array[i]<<" ";
                }
                 int getSize()
                 {
                    return size;
                 }
                 int getCapacity()
                 {
                     return capacity;
                 }
        
  };
  int main()
  {   //cout<<"  testingthis is running";
     dynamicarray d;
     d.insert(5);
      for( int i=6; i<10;i++)
        d.insert(i);
        d.printall();
         cout<<endl;
         d.insertAt(3,10);
         d.printall();
         cout<<" capacity="<<d.getCapacity()<<"  and size="<<d.getSize()<<endl;
          d.shrinktofit();
           cout<<"  after shrink the capacity="<<d.getCapacity()<<"  and size="<<d.getSize()<<endl;
           d.deleteByindex(2);
           d.printall();


         return 0;
     
  }