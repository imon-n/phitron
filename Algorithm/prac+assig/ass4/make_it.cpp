#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
int dp[N];
bool make_it(int n,int target)
{
   if(n==target) return true;
   if(n < target) return false;  
    if (dp[target] !=-1) return dp[target];  
   
   return dp[target] = make_it(n,target+3) || make_it(n,target*2);
}
int main(){
   int n,test;
   cin>>test;
while (test--)
{    
  cin>>n;
  for (int i=0; i<N; i++)
  {
    dp[i]=-1;
  }  
  if(make_it(n,1)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;   
}      
    return 0;
}


// 5
// 1
// 3
// 5
// 15
// 16

