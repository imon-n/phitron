// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int> pii;
// const int N = 1e5+7;
// const int INF = 1e9+7;
// vector<pii>g[N];
// int n,m;
// int dist[N];

// void bellmen_ford(int s)
// {
//    for (int i=1; i<=n; i++)
//    {
//        dist[i]=INF;
//    }

//    dist[s]=0;

//    for (int i=1; i<=n; i++)
//    {
//       for (int u=1; u<=n; u++)
//        {
//           for(pii v_pair : g[u])
//           {
//             int v = v_pair.first;
//             int w = v_pair.second;

//             if(dist[u] != INF && dist[v] > dist[u]+w)
//             {
//                 dist[v] = dist[u]+w;
//             }
//           }
//        }
//    }
// }

// int main(){
//    cin>>n>>m;
//    while (m--)
//    {
//     int u,v,w;
//     cin>>u>>v>>w;
//     g[u].push_back({v,w});
//    }

//    bellmen_ford(1);

//    for (int i=1; i<=n; i++)
//    {
//        cout<<"Distance of "<<i<<" is : "<<dist[i]<<endl;
//    }  
   
//     return 0;
// }


// 7
// 10
// 1 2 6
// 1 3 5
// 1 4 5
// 2 5 -1
// 3 2 -2
// 3 5 1
// 4 3 -2
// 4 6 -1
// 5 7 3
// 4 7 3

// 4
// 4
// 1 2 4
// 1 3 3
// 3 4 5
// 4 2 -10


#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e5+7;
const int INF = 1e9+7;
int n,m;
int dist[N];
vector<pair<pii,int>> list_of_edge;

void bellmen_ford(int s)
{
   for (int i=1; i<=n; i++)
   {
       dist[i]=INF;
   }

   dist[s]=0;

   for (int i=1; i<=n; i++)
   {
      for(auto upair : list_of_edge)
      {
        int u = upair.first.first;
        int v = upair.first.second;
        int w = upair.second;
        if(dist[u] !=INF && dist[v] > dist[u]+w)
        {
            dist[v] = dist[u]+w;
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
    list_of_edge.push_back({{u,v},w});
   }

   bellmen_ford(1);

   for (int i=1; i<=n; i++)
   {
       cout<<"Distance of "<<i<<" is : "<<dist[i]<<endl;
   }  
   
    return 0;
}

// 7
// 10
// 1 2 6
// 1 3 5
// 1 4 5
// 2 5 -1
// 3 2 -2
// 3 5 1
// 4 3 -2
// 4 6 -1
// 5 7 3
// 4 7 3

// 4
// 4
// 1 2 4
// 1 3 3
// 3 4 5
// 4 2 -10
