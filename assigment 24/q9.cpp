#include<iostream>
using namespace std;
void greatest(double,double);
void greatest(int ,int);
 void greatest(double x,double y)
 {
cout<<(x>y?x:y)<<" is the greatest ";
 }
 void greatest(int x,int y)
 {
cout<<(x>y?x:y)<<" is the greatest ";
 }
int  main()
{ double a,b;
cout<<"enter the two number for comparing"<<endl;
cin>>a>>b;
greatest(a,b);
return 0;
    
} 

