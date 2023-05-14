#include<iostream>
using namespace std; 
 void swap( int &, int & );
 int main()
 {
     int a,b;
      cout<<" enter the numbers to swap ";
       cin>>a>>b;
       swap(a,b);
        cout<<a<<" = a "<<b<<" = b";
          return 0;

     
 }
  void swap( int &x, int &y)
  { 
    int temp;
   temp=x;
   x=y;
   y=temp;
     
  }