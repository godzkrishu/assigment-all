#include<iostream>
using namespace std; 
float area(int);
 float area( int , int );
float area( int,int, float );
 int main()
 {
     int r,l,b,h;
      cout<<" enter the radius of circle ";
       cin>>r;
       cout<<endl<<"the area of circle is "<<area(r);
     
      cout<<endl<<" enter the length and breath of the rectangle ";
       cin>>l>>b;
       cout<<endl<<"the area of rectangle  is  "<<area(l,b);
     
      cout<<endl<<" enter the height and base of the triangle ";
       cin>>h>>b;
       cout<<endl<<"the area of triangle is  "<<area(h,b,0.5);
  return 0;    
 }
 float area(int x)
 {
     return 3.14*x*x;
 }
 float area( int x , int y )
 {
    return x*y;
 }
 float area( int x,int y, float z )
 {
     return x*y*z;
 }