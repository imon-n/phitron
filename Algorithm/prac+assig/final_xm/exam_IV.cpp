#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
int main()
{
    int t;
    cin>>t;
while (t--)
{
int n,s;
    cin >>n>>s;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    int dp[1001][1001];
    dp[0][0] = 1;
    for (int i=1; i<=1000; i++) dp[0][i] = 0;

    for (int i = 1; i<=1000; i++)
    {
        for (int j=0; j<=1000; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = (dp[i][j-w[i-1]] + dp[i-1][j]) % N; 
            }
            else
            {
                dp[i][j] =(dp[i-1][j]);
            }
        }
    }
    
    int x = dp[n][1000-s];
    cout<<x<<endl;
        
}   
    return 0;
}