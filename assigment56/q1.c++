#include<bits\stdc++.h>
 using namespace std;
 int main()
 { 
     list<int> singly;
     int key, flag=0;
      cout<<" enter the element you want to find";
      cin>>key;
     list<int>::iterator i;
      singly.push_back(14);
      singly.push_back(21);
      singly.push_back(11);
      singly.push_back(1);
       for( i=singly.begin();i!=singly.end(); i++)
        {
             if(*i==key)
            {
                flag=1;
                cout<<key<<" is found  "<<endl;
            }
        }
         if(!flag)
         cout<<" elment not found";
        
     return 0;
 }