#include<iostream>
#include<cstdlib>
using namespace std;
 class node
 {
     public:
      int data;
      int* next;
       node()
       {
         data=0;
         next=NULL;
       }
 };
  class SinglyLinklist
  {
     node* head;
      public:
       SinglyLinklist()
       {
        head=NULL;
       }
       void insertAtEnd( int value)
       {
         node* temp= new node();
           if( head==NULL)
           {
             head=temp;
           }
            else
            {

            }
       }
  };
 int main()
 {
     return 0;
 }