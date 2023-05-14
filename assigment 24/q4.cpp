#include <iostream>

using namespace std;
int fact( int );
 int combi(int,int);
 int fact( int n)
 { int fact=1, i;
  if(n<=1)
  return 1;
  
   else
   for(i=1;i<=n;i++)
     {
         fact=fact*i;
     }
      return fact;
 }
  int combi( int i,int j)
  { int comb;
  
      comb=fact(i)/(fact(i-j)*fact(j));   ///ncr=n!/((n-r)!*r!);
      return comb;
  }

int main()
{
     int i,j,k,rows; 
      cout<<"enter the  no of rows"<<endl;
      cin>>rows;
      for(i=0; i<rows;i++)
      { int p=3; //// p i created to print space by swinging its value to even and odd 
          for(k=0;k<rows-i;k++)
           cout<<" "; 
          for(j=0;j<i+1;j++)
          {  
              cout<<combi(i,j)<<" ";
          }
          
           
           cout<<endl;
      }

    return 0;
}