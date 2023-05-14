#include<iostream>
#include<vector>
#include<iterator>
 using  namespace std;
 int main()
 {  vector <int>v={1,2,3,4,5};
   vector<int>::iterator i;  // ptr is the iterator of vector of int type
  for(i=v.begin();i<v.end();i++)
  cout<<" "<<*i; /// here i work as the pointer
    return 0;
 }