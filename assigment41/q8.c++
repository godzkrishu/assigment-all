#include<bits/stdc++.h>
 using namespace std;
  void insertAt( stack<int> &s,int v) // it insert the element at its right position
  {   if(s.empty()||s.top()>v)
       s.push(v);
     else 
     {
        int temp=s.top();
        s.pop();
        insertAt(s,v);
        s.push(temp);
     }
  }
   void reverse( stack<int> &s) 
   { 
   if(!s.empty())
    { 
     int t=s.top();
       s.pop();
       reverse(s);// making stack empty
       insertAt(s,t);// insert at right position
    }



   }
  int main()
  {
    stack<int> s;
     cout<<" enter the number in stack";
      for( int i=0; i<5;i++)
      { int m;
      cin>>m;
        s.push(m);
      }
      reverse(s);
        while (!s.empty())
        { 
            
              cout<<s.top()<<" ";
              s.pop();
        }
        
         
       
    return 0;
  }