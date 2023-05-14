#include<bits/stdc++.h>
using namespace std;
 class Stack
 {
     stack<int> s;
      int Size=1;
      int Top=-1;
      public:
      void push( int v)
      { 
        if(Top==Size)
          Size=Size*2;
        s.push(v);
        Top++;
      }
       void pop()
       {
        if(!s.empty())
        {
            s.pop();
            Top--;
        }
         

       }
        int peek()
        {
            return s.top();
        }
         bool empty()
         {
            if(s.empty())
               return true;
                else return false;
         }
          int size()
          {
            return Size;
          }
 };
 int main()
 { Stack s1;
  s1.push(50);
  s1.push(60);
  s1.push(58);
  s1.push(28);
  s1.push(98);
  s1.push(75);
    cout<<" the stack is"<<endl;
     while(!s1.empty())
     {
         cout<<s1.peek()<<" ";
          s1.pop();
     }


       
     return 0;
 }