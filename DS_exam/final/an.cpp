#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
   long long int a[n];
   for(int i = 0;i<n;i++){
    cin>>a[i];
   }
   map <long long ,int>mp;
   for(int i = 0;i<n;i++){
    mp[a[i]]++;
   }
   int mx = INT_MIN;
   long long int max_num;
   for (auto it = mp.begin();it!= mp.end();it++){
    mx = max(mx,it->second);
    if(it->second==mx)
    {
        max_num = it->first;
    }
   }
   cout<<max_num<<" "<<mx<<endl;
}
}