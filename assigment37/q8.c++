#include<bits/stdc++.h>
 using namespace std;
  int main()
  {  vector <int>v1={2,5,6,8,66,85,44,5,25,64}, v2={5,6,2,64,66,9,10};
  /*
  // Initialise a vector
    // to store the common values
    // and an iterator
    // to traverse this vector
    vector<int> v(vector1.size() + vector2.size());
    vector<int>::iterator it, st;
  
    it = set_intersection(vector1.begin(),
                          vector1.end(),
                          vector2.begin(),
                          vector2.end(),
                          v.begin());
  
    cout << "\nCommon elements:\n";
    for (st = v.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n'
  
  */


  /// 1st sort the both array;
   sort( v1.begin(), v1.end());
   sort( v2.begin(), v2.end());
 vector<int> v(v1.size()+v2.size());
 vector<int>::iterator it, i;
 it=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(), v.begin());
  // the result of the v1 intersection v2  stored into array and 
  //the initial address of that array is stored into v.begin()
  // and end point is in "it"
  cout<<" the intersection  or comman element are "<<endl;
   for(i=v.begin(); i!=it;i++)
    cout<<*i<<" ";

    return 0;
  }