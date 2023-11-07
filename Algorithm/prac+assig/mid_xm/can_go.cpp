#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
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
     int u=pq.top().second; 
     pq.pop();
     visited[u]=true;

     for(pii v_pair : adj[u])
     {
        int v = v_pair.first; 
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
    //  adj[v].push_back({u,w});
   }
   int s;
   cin>>s;
   int test;
   cin>>test;
   while (test--)
   {
     int f,k;
     cin>>f>>k;
     dijkstra(s);
     if(dist[f] <= k)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
   }   
   
    return 0;
}

// 5 7
// 1 2 10
// 1 3 2
// 3 2 1
// 2 4 7
// 3 4 2
// 4 5 5
// 2 5 2
// 1
// 5
// 1 0
// 2 5
// 3 1
// 4 4
// 5 6

// YES
// YES
// NO
// YES
// YES