/*.Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
 return 0;
}
*/
#include<iostream>
 using namespace std;
 class complex
{ int real, img;
public:
complex():real(0), img(0){}
complex( int x, int y)
{
    real=x;
    img=y;
     cout<<"double para const called"<<endl;
}
complex( int x )
{  cout<<"single para  constru called"<<endl;
    real=x;
    img=0;
     
}

operator int()
{ cout<<" int() called"<<endl;
    return real;
}
 void display()
 {
     cout<<real<<"+"<<real<<"i"<<endl;
 }

};
 int main()
{
 complex c1, c2(5,2);
 int x=5,y;
  c1=(complex)x;
  c1.display();
  y=(int)c2;
  cout<<"int  y ="<<y;
 return 0;
}