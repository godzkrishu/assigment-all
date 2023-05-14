#include<bits/stdc++.h>
 using namespace std;
  int main()
  {
     vector <int> v1,v2={5,6,7,8,9};
      cout<<" vector 2nd element are"<<endl;
      for( int i=0; i<v2.size();i++)
       cout<<v2[i]<<" ";
 cout<<"copying the v2 element in v1"<<endl;
 for( int i=0;i<v2.size();i++)
 {// copyinf v2 in v1
  v1.push_back(v2[i]);
 }
 cout<<" vector 1st element are"<<endl;
      for( int i=0; i<v1.size();i++)
         cout<<v1[i]<<" ";
     return 0;
  }