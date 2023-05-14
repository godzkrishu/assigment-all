#include<iostream>
 using namespace std;
 int main()
{ int num[5]={8,5,2,9,1};
 int ans[5], multi=1, count=0, i;
 for(i=0;i<5;i++)
 {  
    if(num[i]==0)
     {
        count++;
        continue;
     }
      else
      multi=multi*num[i];

 }
  cout<<multi<<endl;
for(i=0;i<5;i++)
{    if(num[i]!=0)
    ans[i]=multi/num[i];
    cout<<ans[i]<<endl;
}
  return 0;
}