#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N = 1e5+5;
vector<pii> v[N];
bool visited[N];
class Edge
{
  public:
  int a,b,w;
  Edge(int a, int b, int w)
  {
    this->a=a;
    this->b=b;
    this->w=w;
  }
};
class cmp
{
    public:
    bool operator()(Edge a, Edge b)
    {
       return a.w > b.w;
    }
};
void prims(int s)
{
   priority_queue<Edge,vector<Edge>,cmp> pq;
   pq.push(Edge(s,s,0));
   vector<Edge>edgelist;

   while (!pq.empty())
   {
      Edge parent = pq.top();
      pq.pop();
      int a = parent.a;
      int b = parent.b;
      int w = parent.w;
      if(visited[b]) continue;
      visited[b] = true;
      edgelist.push_back(parent);

      for (pii child : v[b])
      {
        if(!visited[child.first])
        {
          pq.push(Edge(b,child.first,child.second));
        }
      }
    //   for (int i=0; i<v[b].size(); i++)
    //   {
    //       pii child = v[b][i];
    //       if(!visited[child.first])
    //       {
    //         pq.push(Edge(b,child.first,child.second));
    //       }
    //   }
   }

   for(Edge val : edgelist)
   {
    cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
   }
     
}

int main(){
   int n,e;
   cin>>n>>e;
   while (e--)
   {
    int a,b,w;
    cin>>a>>b>>w;
    v[a].push_back({b,w});
    v[b].push_back({a,w}); 
   }
   prims(1);
   
    return 0;
}

// 8
// 11
// 1 5 2
// 1 2 4
// 1 4 10
// 5 4 5
// 2 4 8
// 2 3 18
// 3 4 11
// 4 8 9
// 4 7 11
// 7 6 1
// 8 6 2

