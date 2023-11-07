#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>adj[N];
bool visited[N];
int component[N];

vector<int>nv;

void dfs(int u)
{
    visited[u]=true;
    nv.push_back(u);
    for(int v : adj[u])
    {
        if(visited[v] == true) continue;
        dfs(v);
    }
}
vector<int>tt;
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
      

    for(int i=0; i<N; i++)
    {
        if(visited[i]) continue;

        dfs(i);

        int sz=nv.size();
        if(sz>=2)
        {
           tt.push_back(sz); 
        }  
        nv.clear();   
    } 
    sort(tt.begin(),tt.end());  
    int p=tt.size();
    for(int i=0;i<p;i++)
    {
       cout<<tt[i]<<" "; 
    }
   
    return 0;
}
