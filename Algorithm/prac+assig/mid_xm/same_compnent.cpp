#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
vector<string>adj;
int level[N][N];
int n,m;
bool visited[N][N];
typedef pair<int,int> pii;
vector<pii> direction={{0,-1},{0,1},{-1,0},{1,0}};

bool isValid(int i,int j)
{
   return(i>=0 && i<n && j>=0 && j<m);
}

void bfs(int si,int sj)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pii upair = q.front();
        int i= upair.first;
        int j=upair.second;
        q.pop();
        for(auto d:direction)
        {
            int ni = i+d.first;
            int nj = j+d.second;
            
            if(isValid(ni,nj) && !visited[ni][nj] && adj[ni][nj] !='-')
            {
                q.push({ni,nj});
                visited[ni][nj]=true;
                level[ni][nj]=level[i][j]+1;
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
    adj.push_back(x);    
   }
   cin>>si>>sj;
   cin>>di>>dj;

   bfs(si,sj);

   if(visited[di][dj])
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }  
   
    return 0;
}
// 5 4
// ..-.
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2