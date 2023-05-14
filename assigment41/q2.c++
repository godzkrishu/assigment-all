#include<bits/stdc++.h>
using namespace std;
 int main()
 {
       stack<int> s;
         for( int i =0; i<5;i++)
        s.push(i*6);
         cout<<" the top element of the stack is "<<s.top();
     return 0;
 }