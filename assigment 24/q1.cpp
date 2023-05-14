#include<iostream>
 using namespace std;
int main()
{  int a,i,flag=0;
    cout<<" enter the number "<<endl;
    cin>>a;
     if(a==0||a==1)
      flag=1;

   else 
     for(i=2;i<a;i++)
        if(a%i==0)
          flag=1;

       if(flag==1)
       cout<<"number is not a prime number";
       else
       cout<<"number is prime number";
    
      cout<<endl;
return 0;
}