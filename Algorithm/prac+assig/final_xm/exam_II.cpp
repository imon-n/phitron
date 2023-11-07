#include <bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
int main()
{
    int test;
    cin>>test;
while (test --)
{
    int n,s;
    cin >> n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= 1000; j++) 
            {
                dp[i][j] = false;
            }
        }

        dp[0][0]=true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i][j] || dp[i][j - a[i - 1]];
            }
        }
    }

    if (dp[n][1000 - s])  cout << "YES" << endl;
    else  cout << "NO" << endl;    
}
     
    return 0;
}

 