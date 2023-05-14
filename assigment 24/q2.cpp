#include<iostream>
 using namespace std;
  int main()
  {
     int n, r,largest=0;;
      cout<<"enter the number"<<endl;
      cin>>n;
       while(n!=0)
       {
         r=n%10;
         if(r>largest)
         largest=r;
         n=n/10;
        }
         cout<<endl<<largest<<"  is the largest digit in the number ";

  }