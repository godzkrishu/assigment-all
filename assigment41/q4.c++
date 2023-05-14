#include<bits/stdc++.h>
 using  namespace std;
  stack<string> s;
  int main()
  {   string str;
      cout<<" enter the  sentance "<<endl;
       getline(cin,str);
        string temp=" "; // initialing the temp
        for( int i=0; i<str.length();i++)
        {
            if(str[i]==' ')  // finding the space 
            {
                s.push(temp);
                 temp=" "; // reinitialising the temp
            }
             else 
             temp=temp+str[i]; // accumalating the letter for words
        }
        s.push(temp); // at the last push the remaining word
         while(!s.empty())
         {
         cout<< s.top()<<" ";
          s.pop();
         }
         

  }