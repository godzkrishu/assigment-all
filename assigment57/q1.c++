#include<iostream>
#include<cstdlib>
 using namespace std;
   class node
   {
     public:
      int data;
       node *right;
        node *left;
         node()
         {
             data=0;
             right=NULL;
             left=NULL;
         }

   };
    class dlink
    {
          node *head;
           dlink()
           {
             head=NULL;
           }
            void insertAtend( int v)
            {
                if( head==NULL)
                {
                    head = new node();
                    head->data=v;
                }
                 
                 else
                 cout<<" write something other here";
            }
    };
  int main()
 {   
    
    
    return 0;
}