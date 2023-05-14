#include<bits\stdc++.h>
 using namespace std;

  int main()
  { 
     list<int> li={11,11,11,23,56,56};
     list<int>::iterator begin=li.begin();
     list<int>::iterator end=li.end();
       int preElement, a[li.size()]={0}, k=0;
        cout<<" list before removing dublicate in increasing order"<<endl;
       for(auto i=begin;i!=end;i++)
       {   cout<<*i<<" ";
           if(i==begin)
           {
              preElement=*i;
              a[k]=*i;
              k++;
           }
           
           else if(*i!=preElement)
              {
                 preElement=*i;
                a[k]=*i;
                k++;
              }

       }
          li.clear(); 
           for(int j=0;a[j];j++)
           li.push_back(a[j]);
           cout<<endl<<"list after removing dublicate"<<endl;
            for(auto i=li.begin(); i!=li.end();i++)
               cout<<*i<<"  ";
          return 0;
  }