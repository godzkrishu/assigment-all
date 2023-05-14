#include<iostream>
#include<vector>
#include<iterator>
#include<cstdlib>/// for random keywords 
#include<algorithm>// for find(  begin iterator, end iterator,  number) funtion an dit reurn the itrator
using namespace std;
 int  main()
 {  int num;
      vector<int>v;
       for(int i=0; i<5; i++)
        v.push_back(  rand()%100);
        vector<int>:: iterator ptr;
         for(  ptr=v.begin(); ptr!=v.end();ptr++)
          cout<<" "<<*ptr;
    
         cout<<endl <<"  enter the number you want to check its existance";
           cin>>num;
          ptr= find( v.begin(), v.end(), num);   
           if(ptr!=v.end())  // if iterator not reached to the end point  it means elemnt is found
             cout<<" element"<<num<<" is found at position "<<( ptr-v.begin()+1);// position= iterator- beging iterator +1
             else
              cout<<endl<<" the elemnt does not  found  ";
                
           
             
          
 }