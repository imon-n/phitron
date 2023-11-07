#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
while (t--)
{
   int n,s;
   cin>>n>>s;
   int w[n];
   for (int i=0; i<n; i++)
   {
       cin>>w[i];
   }

   int dp[1001][1001];
   dp[0][0]=0;

   for (int i=1; i<=1000; i++)
   {
       dp[0][i] =1001;
       // dp[0][i] =INT_MAX-1;
   }

    for (int i=1; i<=1000; i++)
    {
        for (int j=0; j<=1000; j++)
        {
            if (w[i-1] <=j)
            {
                dp[i][j] = min(1 + dp[i][j - w[i-1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }   


    if (dp[n][1000 - s]<=1000) cout<<dp[n][1000- s]<< endl;
    else cout << -1 << endl;
}    

    return 0;
}