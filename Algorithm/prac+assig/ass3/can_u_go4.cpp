#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e5+7;
const int INF = 1e9+7;
vector<pii>g[N];
int n,m;
int dist[N];

void bellmen_ford(int s)
{
   for (int i=1; i<=n; i++)
   {
      dist[i]=INF;
   }

   dist[s]=0;

   for (int i=1; i<=n; i++)
   {
      for (int u=1; u<=n; u++)
       {
          for(pii v_pair : g[u])
          {
            int v = v_pair.first;
            int w = v_pair.second;

            if(dist[u] != INF && dist[v] > dist[u]+w)
            {
              dist[v] = dist[u]+w;
            }
          }
       }
   }
}

int main(){
   cin>>n>>m;
   while (m--)
   {
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});
   }
  
  int ss;
  cin>>ss;
  int q;
  cin>>q;
  int flage=0;
  while (q--)
  {
    int nn;
    cin>>nn;
    bellmen_ford(ss);
    if(dist[nn] == INF)
    {
      cout<<"Not Possible"<<endl;
    }
    else if(dist[ss] < 0)
    {
      cout<<"Negative Cycle Detected"<<endl;
      break;
    }
    else
    {
      cout<<dist[nn]<<endl;        
    }
  }
   
    return 0;
}