/*Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}*/
#include<iostream>
 using namespace std;
 class Complex
{
     int real, img;
     public:
     void setData( int a, int b)
     {
        real=a;
        img=b;
     }
      operator  int()
      { cout<<" int() operator called"<<endl;
       return real;
         
      }
};
 int main()
{
    Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 cout<<x<<endl;
 
return 0;
}