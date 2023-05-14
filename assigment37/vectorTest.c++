#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iterator>
 using namespace std;
 
 int main()
{
     vector  <int>v={5,6,7,8};// declaring the vector
      for( int i=v.size(); i<5;i++)
          v.push_back(i);
      for( int i=0; i<5;i++)
       cout<<v[i];
       // using the iterator
        cout<<endl<<" using iterator" <<endl;
     vector<int>::iterator i; // declaring the iterator
     for( i=v.begin(); i<v.end(); i++)
          cout<<*i<<" ";
      cout<<endl<<" capacity ="<<v.capacity()<<" and the size="<<v.size()<<endl;
      // shrik to fit function
      v.shrink_to_fit();
      cout<<"  after the shrink to fit";
      cout<<endl<<" capacity ="<<v.capacity()<<" and the size="<<v.size()<<endl;
     
     //  reverse operatror
       reverse(v.begin(),v.begin()+v.size());//reverse(vec1.begin() + 5, vec1.begin() + 8);
       cout<<"after reversing the vectro"<<endl;
        for( i=v.begin(); i<v.end(); i++)
           cout<<*i<<" ";
       
       // insert()
        v.insert(v.begin()+1,5); // list.insert( pointer,value)
        cout<<endl<<"after using insert  fuction"<<endl;
        for( i=v.begin(); i<v.end(); i++)
           cout<<*i<<" ";
        // remove() use to remove all element
            v.remove(5);
      
     
return 0;
}