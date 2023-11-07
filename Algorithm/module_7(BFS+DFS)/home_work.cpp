
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];

void bfs(int s)
{
  queue<int>q;
  q.push(s);
  visited[s]=true;

  while (!q.empty())
  {
    int u=q.front();
    q.pop();
    for(int v : adj[u])
    {
        if(visited[v] == true) continue;
        q.push(v);
        visited[v] = true;
    }
  }  
}
int j=0;
void dfs(int u)
{
    visited[u] = true;
    for(int v:adj[u])
    {
       if(visited[v] == true) continue;
       dfs(v); 
    }
}
int main(){
    int n,m;
    cin>>n>>m;

    for (int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
   
   int cc=0;
   for (int i=1; i<=n; i++)
   {
    if (visited[i]) continue;
       dfs(i);
    //    bfs(i);
       cc++;
   }
   cout<<"connected component : "<<cc<<endl;


   
    return 0;
}

// sample input:
// 7
// 5
// 1 2
// 1 3
// 2 3
// 2 4
// 5 6
// sample output: 
// connected component : 3
// component 1: 1 2 3 4
// component 2: 5 6
// component 2: 7

