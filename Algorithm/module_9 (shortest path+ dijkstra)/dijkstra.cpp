#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
typedef pair<int,int>pii;
vector<pii>adj[N];
int INF= 1e9+10;
vector<int> dist(N,INF);
bool visited[N];

void dijkstra(int source)
{
   priority_queue<pii, vector<pii>, greater<pii>> pq;
   
   dist[source]=0;
   pq.push({dist[source] , source});

   while (!pq.empty())
   {
     int u=pq.top().second; // 2nd node ta pabo(sobceye kom weight lagbe)
     pq.pop();
     visited[u]=true;
     //priority_queue er .first hocce weight eta just priroty kom nki besi etar jonno kaje lagbe ,,,ar amra kaj korbo .second(node) ta ke niye,,,karon amra

     for(pii v_pair : adj[u])
     {
        int v = v_pair.first; // main function e lokko kore deko,,,{v,w}/{u,w},,,erokom babe push korcilam,,tai first e node and 2nd e cost
        int w = v_pair.second;

        if(visited[v]) continue;

        if(dist[v] > dist[u]+w)
        {
         dist[v]=dist[u]+w;
         pq.push({dist[v],v});
        }
     }
   }   
}

int main(){
   int n,m;
   cin>>n>>m;
   while (m--)
   {
     int u,v,w;
     cin>>u>>v>>w;
     adj[u].push_back({v,w});
     adj[v].push_back({u,w});
   }

   dijkstra(1);

   for (int i=1; i<=n; i++)
   {
      cout<<"Distance of Node "<<i<<" : "<<dist[i]<<endl;
   }  
   
   return 0;
}

// 7
// 8
// 1 2 3
// 1 3 5
// 3 4 1
// 4 6 1
// 2 5 6
// 5 6 1
// 5 7 2
// 3 7 12

// 5 7
// 1 3 2
// 1 2 10
// 2 3 1
// 3 4 2
// 4 5 7
// 2 4 3
// 2 5 2