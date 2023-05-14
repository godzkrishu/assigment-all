#include<bits/stdc++.h>
 using namespace std;
  int main()
  {  vector <int>v={2,5,6,8,66,85,44,5,25,64};
   cout<<" before reversing"<<endl;
    for(int i=0; i<v.size(); i++)
     cout<<v[i]<<" ";
    reverse(v.begin(),v.end());
    cout<<" after reversing"<<endl;
    for(int i=0; i<v.size(); i++)
     cout<<v[i]<<" ";
   return 0;
  }