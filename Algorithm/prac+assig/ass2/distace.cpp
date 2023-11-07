#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
int level[N];
bool visited[N];
void bfs(int s)
{
  queue<int>q;
  q.push(s);
  visited[s] = true;
  level[s] = 0;  

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
    cin >>n>>m;
    while (m--) 
    {
        int u,v;
        cin >>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;
    while (q--) {
        int s, d;
        cin >>s>>d;

        for (int i = 0; i < N; ++i) 
        {
            visited[i]=false;
            level[i] = -1;
        }

        bfs(s);

        if (s == d) 
        {
            cout << 0 << endl;
        } 
        else if (level[d] == -1) 
        {
            cout << -1 << endl;
        } else 
        {
            cout << level[d] << endl;
        }
    } 
   
    return 0;
}