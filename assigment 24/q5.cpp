#include<iostream>
using namespace std;
int fibbo( int n)
{
      int n1=1,n2=1,i, flag=0,next=0;
        cout<<n1<<" "<<n2;
        next=n1+n2;
         for(i=1;;i++)
         { 
            cout<<" "<<next;
            if(n==next)
            {
                flag=1;
                break;
            }
           else if(next>n)
            break;
           else
           { 
           
            n1=n2;
            n2=next;
             next=n1+n2;
           }
         }
          return flag;
}
 int main()
 {
     int p,m; 
      cout<<" enter the number to check"<<endl;
      cin>>m;
       if(m==1||m==0)
       cout<<endl<<m<<" is present in the series";
        else
        {
        p=fibbo(m);
         if(p==1)
         cout<<endl<<m<<" is present in the series";
         else  if(p==0)
         cout<<endl<<m<<" is not  present in the series";
        }

          return 0;

     
 }