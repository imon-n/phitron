#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+4;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    parent[s]=-1;

    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v: adj[u])
        {
        if(visited[v] == true) continue;
        q.push(v);
        visited[v] = true;
        level[v]=level[u]+1; 
        parent[v] = u;           
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

   int s,d;
   cin>>s>>d;

   bfs(s);
   cout<<"sortest way s to d : "<<level[d]<<endl;
   
   for (int i=1; i<=n; i++)
   {
       cout<<"parent of "<<i<<" is : "<<parent[i]<<endl;
   }

   vector<int>path;
   int current = d;
   while (current !=-1)
   {
     path.push_back(current);
     current=parent[current];
   }

   reverse(path.begin(),path.end());
   cout<<endl;
   cout<<"path : ";
   for(int node:path)
   {
     cout<<node<<" ";
   }
   
    return 0;
}

// 7
// 7
// 1 2
// 1 3
// 3 4
// 4 6
// 2 5
// 5 6
// 5 7
// 1
// 7