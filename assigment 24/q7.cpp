#include<iostream>
using namespace std; 
 int sum( int,int x=0, int y=0);
 int main()
 {
     int a,b,c;
      cout<<" enter a and b  ";
       cin>>a>>b;
       cout<<" the sum = "<< sum(a,b);
       cout<<endl<<" enter a,b and c ";
       cin>>a>>b>>c;
       cout<<" the sum = "<< sum(a,b,c);
          return 0;

     
 }
int sum( int s,int x, int y )
{
     return s+x+y;
}