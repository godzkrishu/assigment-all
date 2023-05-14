#include<bits/stdc++.h>
 using namespace std;
 void  addedge( vector<int> v[], int edge1, int edge2, int directed)
  {  
     v[edge1].push_back(edge2);
      if(!directed)
      v[edge2].push_back(edge1);
  }
  void printGraph( vector <int> v[], int size)
  {
     for( int i=0; i<size; i++)
     {
         cout<<" the connectd graph with the vertex"<<endl;
          for( auto x: v[size])
           cout<<"->"<<x;

            cout<<endl;
     }
  }
  int main()
  {  int v, directed;
   cout<<" enter the number of  vertices"<<endl;
   cin>>v;
   cout<<"  enter 0 for undirect or 1 for directed"<<endl;
   cin>>directed;
    vector <int> adj[v];
    addedge(adj,1,2,directed);
    addedge(adj,1,4,directed);
    addedge(adj,2,3,directed);
    addedge(adj,3,5,directed);
    printGraph(adj, v);
     return 0;
  }