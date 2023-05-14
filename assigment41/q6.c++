#include<bits/stdc++.h>
 using namespace std;
  int main()
  {  string str;
   stack<char> s;
     cout<<" enter the string you want to reverse"<<endl;
      getline( cin, str);
        for( int i=0; i<str.length(); i++)
        s.push(str[i]);
         while (!s.empty())
         {
           cout<<s.top();
           s.pop();
         }
         
    return 0;
  }