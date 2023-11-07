#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int v[n] , w[n];

   for (int i=0; i<n; i++)
   {
      cin>>v[i];
   }

   for (int i=0; i<n; i++)
   {
      cin>>w[i];
   }
   
   int s;
   cin>>s;
   int dp[n+1][s+1];

  for (int i=0; i<=n; i++)
   {
      for (int j=0; j<=s; j++)
      {
         if(i==0 || j==0) dp[i][j]=0;
      }
   }

for (int i=1; i<=n; i++)
{
  for (int j=1; j<=s; j++)
  {
    if (w[i-1] <=j)
    {
      int op1 = dp[i-1][j-w[i-1]] + v[i-1];
      int op2 = dp[i-1][j];
      dp[i][j] = max(op1,op2);
    }
    else
    {
      dp[i][j] = dp[i-1][j];
    }
  }
}

//   for (int i=0; i<=n; i++)
//   {
//     for (int j=0; j<=s; j++)
//     {
//        cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
//   }

 cout<<dp[n][s];

    return 0;
}
// 4
// 1 5 3 2
// 5 2 4 3
// 7
// output : 8


// 3
// 1 2 3
// 4 5 1
// 4 
// output : 3


// 3
// 1 2 3
// 4 5 6
// 3 
// output : 0