#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adj[N];

int main(){
    int n,m;
    cin>>n>>m;

    while(m--)
    {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    int n1;
    cin>>n1;
    cout<<adj[n1].size();
 
   
    return 0;
}