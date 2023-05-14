#include<iostream>
using namespace std;
class complex
{
private:
 int real;
  int img;
   public:
    void setdata(int x, int y)
    { 
        real=x;
        img=y;
    }
     void display()
     {
        cout<<real<<"+"<<img<<"i"<<endl;
     }
};
 int main()
 {
      complex c1,c2;
       c1.setdata(5,6);
       c2.setdata(41,2);
        c1.display();
        c2.display();
         return 0;

 }