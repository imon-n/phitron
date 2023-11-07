#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
vector<int>adj[N];
bool visited[N];
// vector<pair<int,int>>adj[N];// for weight

void dfs(int u)
{
    // section_1: action just after entering node u
    visited[u] = true;
    cout<<"visited node : "<<u<<endl;
    for(int v:adj[u])
    {
        // section_2: action before entering a new neighbor
        if(visited[v]==true) continue; //  if(visited[v]==false) dfs(v); ====>>>ebabeu lika jabe ekane    
        dfs(v);
        // section_3: action just after exiting a neighbor
    }
    // section_4: action after entering node u 
}
int main(){
   int n,m;
   cin>>n>>m;

   while(m--)
   {
       int u,v,w;
       cin>>u>>v;

       adj[u].push_back(v);
       adj[v].push_back(u);
   }

    dfs(1);

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

// 10
// 9
// 1 2
// 1 3
// 1 10
// 2 4
// 3 5
// 3 6
// 4 7
// 4 8
// 6 9

// 9
// 10
// 1 2
// 2 3
// 3 8
// 1 5
// 5 4
// 5 6
// 4 7
// 6 7
// 7 8
// 8 9