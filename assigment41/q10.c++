#include<bits/stdc++.h>
 using namespace std; 
  int main()
  { stack<int> s;
   int a[4]={11,13,3,21},i;
    for( i=3;i>=0;i--) // traversing the loop in reverse direction becouse it is easy to handel
    {
        if(s.empty())
        {
            s.push(a[i]);// push the element into the stack
           cout<<a[i]<<"->"<<-1<<" "<<endl; // becouse the last elemnt has no any  next greatest  element

        }
         else if( a[i]<s.top())
         {
            cout<<a[i]<<"->"<<s.top()<<" "<<endl;
            s.push(a[i]);
         }
          else if(a[i]>s.top())
          {
            while (!s.empty()&&a[i]>s.top())
            {
                s.pop();
            }
             if(s.empty())
             cout<<a[i]<<"->"<<-1<<" "<<endl; // no greatest element found
            else 
            cout<<a[i]<<"->"<<s.top()<<" "<<endl;

            s.push(a[i]); // push that element into the stack
          }

       
       
    }
    
  

    return 0;
  }