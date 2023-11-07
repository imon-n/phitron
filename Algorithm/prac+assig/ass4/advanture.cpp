#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapscak(int n, int s,int v[],int w[])
{
   if(n==0 || s==0) return 0;

   if(dp[n][s] !=-1) return dp[n][s];

   if(s >= w[n-1])
   {
    int op1 = knapscak(n-1,s-w[n-1],v,w)+v[n-1];
    int op2 = knapscak(n-1,s,v,w);
    return dp[n][s]=max(op1,op2);
   }
   else
   {
     return dp[n][s] = knapscak(n-1,s,v,w);
   }   
}
int main(){
   int t,n,s;
   cin>>t;
   while (t--)
   {
   cin>>n>>s;
   int v[n],w[n];
   for (int i=0; i<n; i++)
   {
       cin>>w[i];
   }

   for (int i=0; i<n; i++)
   {
       cin>>v[i];
   }    

   for (int i=0; i<=n; i++)
   {
       for (int j=0; j<=s; j++)
       {
           dp[i][j] = -1;
       }
   } 
   cout<<knapscak(n,s,v,w)<<endl;    
   }
   
    return 0;
}

// 4 7
// 2 3 4 5
// 4 7 6 5

// 4 17
// 2 3 4 5
// 4 7 6 5