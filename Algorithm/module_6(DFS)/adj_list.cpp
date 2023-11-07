#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
vector<int>adj[N];
// vector<pair<int,int>>adj[N];// for weight
int main(){
   int n,m;
   cin>>n>>m;

   for (int i=0; i<m; i++)
   {
       int u,v;
       cin>>u>>v;
    //    cin>>u>>v>>w;
    //    adj[u].push_back({v,w});
    //    adj[v].push_back({u,w});

       adj[u].push_back(v);
       adj[v].push_back(u);
   }

//    for (int i=1; i<=n; i++)
//    {
//       cout<<"list "<<i<<" : ";
//        for(auto j:adj[i])        ///for weight
//        {
//         cout<< "(" <<j.first<<","<<j.second <<")";
//        }
//        cout<<endl;
//    }
   for (int i=1; i<=n; i++)
   {
      cout<<"list "<<i<<" : ";
       for(int j:adj[i])
       {
        cout<<j<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}

// 4
// 5
// 1 2
// 1 3
// 2 4
// 4 3
// 3 2

// 4
// 5
// 1 2 8
// 1 3 9
// 2 4 11
// 4 3 17
// 3 2 15