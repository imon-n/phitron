#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
bool visited[N][N];
typedef pair<int,int> pii;
vector<pii> direction={{0,-1},{0,1},{-1,0},{1,0}};
vector<string>adj;
int level[N][N];
pii parent[N][N];
int n,m;
bool isValid(int i,int j)
{
  return(i>=0 && i<n && j>=0 && j<m);
}

void bfs(int si ,int sj)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();

        for(auto d:direction)
        {
            int ni = i+d.first;
            int nj = j+d.second;
            if(isValid(ni,nj) && !visited[ni][nj] && adj[ni][nj] !='#')
            {
                q.push({ni,nj});
                visited[ni][nj]=true;
                level[ni][nj]=level[i][j]+1;
                parent[ni][nj]={i,j};
            }
        }
    }
    

}

int main(){
  int si,sj,di,dj;
   cin>>n>>m;
   for (int i=0; i<n; i++)
   {
       string x;
       cin>>x;
       for (int j=0; j<m; j++)
       {
           if(x[j]=='A')
           {
             si=i,sj=j;
           }
           if(x[j]=='B')
           {
             di=i,dj=j;
           }
       }
       adj.push_back(x);
   }
   
   bfs(si,sj);
   
   if(level[di][dj] !=0)
   {
    cout<<"YES\n";
   cout<<level[di][dj]<<endl;
   }
   else{
    cout<<"NO\n";
   }

   vector<pii>path;
   pii cur = {di,dj};
   while (!(cur.first==si && cur.second==sj))
   {
     path.push_back(cur);
     cur=parent[cur.first][cur.second];
   }
   path.push_back({si,sj});

   reverse(path.begin(),path.end());

   for (int i=1; i<path.size(); i++)
   {
       if(path[i-1].first == path[i].first)
       {
          if(path[i-1].second == path[i].second-1)
          {
            cout<<"R";
          }
          else
          {
            cout<<"L";
          }
       }
       else
       {
          if(path[i-1].first == path[i].first-1)
          {
            cout<<"D";
          }
          else
          {
            cout<<"U";
          }
       }
   }
   
 
    return 0;
}
// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########

