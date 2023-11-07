#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
bool visited[N][N];
vector<string>adj;
int n,m;
bool isValid(int i,int j)
{
    return(i>=0 && i<n && j>=0 && j<m);
}
 int cnt;
void dfs(int i,int j)
{
    if(! isValid(i,j)) return;
    if(visited[i][j]) return;
    if(adj[i][j] == '-') return;

    visited[i][j]=true;
    cnt++;

    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i+1,j);
}
int main(){
   cin>>n>>m;
   for (int i=0; i<n; i++)
   {
       string x;
       cin>>x;
       adj.push_back(x);
   }

   int mn=1000000;

   for (int i=0; i<n; i++)
   {
       for (int j=0; j<m; j++)
       {
           if(adj[i][j] =='-') continue;
           if(visited[i][j]) continue;
           cnt = 0;
           dfs(i,j);
           mn = min(cnt, mn);
       }
   }

  if(mn==1000000)
  {
    cout<<-1;
  }
  else
   cout<<mn;
   
    return 0;
}

// 6 5
// ..-..
// ..-..
// -----
// .-...
// .----
// .....
// Output : 3


// 3 3
// ---
// ---
// ---
// Output : -1
