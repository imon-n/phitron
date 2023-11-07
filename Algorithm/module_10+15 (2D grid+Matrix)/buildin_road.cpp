#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
vector<int>adj[N];
bool visited[N];
 
void dfs(int u)
{
  visited[u]=true;
  for(int v : adj[u])
  {
    if(visited[v]) continue;
    dfs(v);
  }
}

int main(){
   int n,m;
   cin>>n>>m;
   while (m--)
   {
     int u,v;
     cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
   }

   vector<int>leader;
   int k=0;
   for (int i=1; i<=n; i++)
   {
      if(visited[i]) continue;
      k++;
      leader.push_back(i);
      dfs(i);
   }
   cout<<k-1<<endl;
   
   for(int r : leader)
   {
    cout<<r<<" ";
   }
   
  return 0;
}