#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+7;
ll saved[N];
ll fibo(ll n)
{
   if(n==0 || n==1) return 1;
  
   if(saved[n] != -1)
   {
     return saved[n];
   }
    ll ans1 = fibo(n-1);//bam
    ll ans2 = fibo(n-2);// dan
    saved[n] = ans1+ans2; 
    return saved[n];

   //  return saved[n] = fibo(n-1)+fibo(n-2);
}
int main(){
   ll n;
   cin>>n;

   for (ll i=0; i<=n; i++)
   {
      saved[i] = -1;
   }

   cout<<fibo(n);
   
   return 0;
}
