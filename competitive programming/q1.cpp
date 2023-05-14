/*Given an integer  x , return  true  if  x  is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example,  121  is a palindrome while  123  is not.*/
#include<iostream>
 using namespace std;

 int main()
{  int num, n, rev=0,rem;
    cout<<"enter the number is pallindrom or not"<<endl;
    cin>>num;
     if(num<0)
     cout<<" false"<<endl;
    else
    { n=num;
     while(n!=0)
     { 
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
     if(rev==num)
     cout<<"True";
     else
     cout<<"False";
    }
return 0;
}