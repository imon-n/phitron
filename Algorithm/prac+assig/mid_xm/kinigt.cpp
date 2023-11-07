#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
bool visited[N][N];
typedef pair<int,int> pii;
vector<pii> direction={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
vector<string>adj;
int level[N][N];
int row,col;

int n,m;
bool isValid(int i,int j)
{
    return(i>=0 && i<row && j>=0 && j<col);
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
    for (int i=0; i<row; i++)
    {
       for (int j=0; j<col; j++)
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
    cin>>row>>col;
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    bfs(si,sj);
    if(!visited[di][dj])
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<< level[di][dj]<<endl;
    }
    reset_level();
   }

    return 0;
}



