#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main(){
   int n,s;
   cin>>n;
   int a[n];
   for (int i=0; i<n; i++)
   {
       cin>>a[i];
   }

   cin>>s;

   dp[0][0] = 1;

   for (int i=1; i<=n; i++)
   {
       dp[0][i] = 0;
   }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }       
   
    return 0;
}

// 4
// 1 2 4 6
// 7

// 6
// 1 2 3 4 5 6 
// 7