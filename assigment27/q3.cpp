//Write a C++ program to add two complex numbers using operator overloaded by a friend function.

#include<iostream>
using namespace std;
class Complex
{
     int a,b;
      public:
      Complex(){ 
         cout<<" default constructur"<<endl;
         a=0;
         b=0;
      }
      Complex( int x, int y)
      { cout<<"parameterised constructor"<<endl;
         a=x;
         b=y;
      }
      
      void setData( int x, int y)
      {
         a=x;
         b=y;
      }
      void display()
      {
         cout<<a<<"+"<<b<<"i";

      }
      friend Complex operator+( Complex &, Complex &);// return complex data type
     
};
Complex operator+(Complex &x, Complex &y)
{ cout<<" freind function"<<endl;
     Complex temp;
     temp.a=x.a+y.a;
     temp.b=x.b+y.b;
     return temp;
}
int main()
{ 
    Complex c1(56,86), c2(57,10), c3;
    c3=c1+c2;
    c3.display();

     return 0;
}