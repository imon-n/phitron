#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
vector<int>adj[N];
vector<bool>visited(N,false);
// bool visited[N];
vector<int>parent(N,-1);
vector<int>level(N,0);
// int level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true; 
            level[v]=level[u]+1;
            parent[v]= u;
        }
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
   bfs(1);

   cout<<level[n]<<endl;

   vector<int>path;
   int cur = n;
   while (cur != -1)
   {
     path.push_back(cur);
     cur = parent[cur];
   }

   reverse(path.begin(),path.end());

   for(int p :path)
   {
    cout<<p<<" ";
   }
   
   
    return 0;
}
// 5 5
// 1 2 
// 1 3
// 2 3
// 1 4
// 4 5