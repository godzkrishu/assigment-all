#include<bits\stdc++.h>
 using namespace std;
  class node
  {
      public:
        node * next;
         int val;
           node()
           {
            next=NULL;
            val=0;
           }
          node(int v)
          {
            next=NULL;
            val=v;
          }
          ~node()
          {
             next=NULL;
             val=0;
          }
         
  };
  class singly 
  {  node * head;
    public:
    singly()
    {
        head=NULL;
    }
     void push_back( int v)
     {  node * temp=new node(v);
        if(head==NULL)
         head=temp;
         else
         { node *t=head;
            while(t->next!=NULL)
            {
              t=t->next;
            }
            t->next=temp;

         }
        

     }
      void print()
      {
        if(head==NULL)
         cout<<" linklist is empty";
         else{
              node *t=head;
               while (t!=NULL)
               {
                 cout<<"->"<<t->val;
                 t=t->next;
               }
               
         }
      }
 void movelast()
   {  
      
       if(head==NULL)
       cout<<" list is empty"<< endl;
        else
        {   node * it=head;
            while (it->next->next!=NULL)
            {   
                it=it->next;
            }
            it->next->next=head;// last point 1
            head=it->next;// head point last
            it->next=NULL;// braking the last link
            
            
        }
   }
   node * gethead()
   {
    return head;
   }

     
  };
  

  int main()
  { singly li;  
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
     cout<<" these are the element"<<endl;
    li.print();
     cout<<endl;
     cout<<" after moving the last node at 1st "<<endl;
      li.movelast();
       li.print();
    
     
     return 0;
  }