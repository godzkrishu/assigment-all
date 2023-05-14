#include<iostream>
using namespace std;
void add(double,double);
void add(int ,int);
 void add(double x,double y)
 {
cout<<(x>y?x:y)<<" is the add ";
 }
 void add(int x,int y)
 {
cout<<(x>y?x:y)<<" is the add ";
 }
int  main()
{ double a,b;
cout<<"enter the two number for adding"<<endl;
cin>>a>>b;
add(a,b);
return 0;
    
} 

