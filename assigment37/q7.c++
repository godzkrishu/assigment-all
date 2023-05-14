#include<bits/stdc++.h>
 using namespace std;
 
 int main()
{
     vector<int>v={1,23,5,7,8,9};
      cout<<" the sum of the vector is ";
       cout<<accumulate(v.begin(),v.end(),0);
return 0;
}