
#include<bits/stdc++.h>
using namespace std;
int main(){
   int ed;
   cin>>ed;
   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>adj;
   for (int i=0; i<ed; i++)
   {
    int u,v;
    cin>>u>>v;
    adj.push({u,v});   
   }

   while (!adj.empty())
   {
      int i = adj.top().first;
      int j = adj.top().second;
      adj.pop();
      cout<<i<<" "<<j<<endl;
   }
   
   return 0;
}