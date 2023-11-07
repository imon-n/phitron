#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
bool visited[N][N];
typedef pair<int,int> pii;
vector<pii> direction={{1,2},{1,-2},{-1,2},{-1,-2},
                       {2,1},{2,-1},{-2,1},{-2,-1}};
vector<string>adj;
int level[N][N];

int n,m;
bool isValid(int i,int j)
{
    return(i>=0 && i<8 && j>=0 && j<8);
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
            if(isValid(ni,nj) && !visited[ni][nj] )
            {
                q.push({ni,nj});
                visited[ni][nj]=true;
                level[ni][nj]=level[i][j]+1;
            }
        }
    }
    
}

void reset_level()
{
    for (int i=0; i<8; i++)
    {
       for (int j=0; j<8; j++)
       {
         visited[i][j] = false;
         level[i][j] = 0;           
       }
    }
}

int main(){
    int si,sj,di,dj;
    cin>>n;
   for (int i=0; i<n; i++)
   {
       string x,y;
       cin>>x>>y;
       si=x[0] - 'a';
       sj=x[1] - '1';

       di=y[0] - 'a';
       dj=y[1] - '1';
       bfs(si,sj);
      cout<< level[di][dj]<<endl;
      reset_level();
   }
    return 0;
}

// Input:
// 3
// a1 h8
// a1 c2
// h8 c3

