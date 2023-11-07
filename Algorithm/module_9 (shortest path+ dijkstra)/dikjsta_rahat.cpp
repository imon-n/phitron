#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
vector<pair<int,int>> v[N];
int dis[N];

void dijks(int p)
{
    
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
   dijks(1);
   
   
    return 0;
}


// 5 7
// 1 3 2
// 1 2 10
// 2 3 1
// 3 4 2
// 4 5 7
// 2 4 3
// 2 5 2