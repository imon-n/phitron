#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
  queue<int>q;
  q.push(s);
  visited[s]=true;
  level[s]=0;

  while (!q.empty())
  {
    int u=q.front();
    q.pop();
    for(int v : adj[u])
    {
      if(visited[v] == true) continue;
      q.push(v);
      visited[v] = true;
      level[v]=level[u]+1;
    }
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
    
    bfs(0);
    int n1;
    cin>>n1;

    bool found = false;
    if(n1==0)
    {
      cout<<0;
    }
    else if(n1 >= n)
    {
      cout<<"-1"<<endl;
    }
    else
    {
       for (int i=1; i<N; i++)
      {
        if(level[i]==n1)
        {
         cout<<i<<" ";
         found=true; 
        } 
      }

     if(!found) cout<<"-1"<<endl;
    }
    
   
   
    return 0;
}