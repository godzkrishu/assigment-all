#include<iostream>
 using namespace std;
int main()
{  int a[10],i, sum=0;
    cout<<" enter the element of array"<<endl;
    for(i=0;i<10;i++)
      {
        cin>>a[i];
        sum=sum+a[i];
      }
       cout<<sum<<"  is the sum of all element";

    
      cout<<endl;
return 0;
}