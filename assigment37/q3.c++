#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
 using namespace std;
  int main()
  {  int x; // use a trick to take user input 
    vector<int>v; 
  vector<int>::iterator ptr;
   cout<<" enter the 5 values "<<endl;
  for( int i=0;i<5;i++)
  { cin>>x;
  v.push_back(x);
  }
  
 cout<<" the entered values are"<<endl;
  for( int  i=0;i<5;i++)
     cout<<v[i];
   
     return 0;
  }