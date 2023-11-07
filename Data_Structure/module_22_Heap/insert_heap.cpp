#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v ;
   int n;
   cin>>n;
 for (int i=0; i<n; i++)
 {
    int x;
    cin>>x;
    v.push_back(x);
    int cur_indx = v.size()-1;

   while (cur_indx != 0)
   {
    int pr_indx = (cur_indx-1)/2;
    if (v[pr_indx] < v[cur_indx])
      swap(v[pr_indx] , v[cur_indx]);
    else
    break; 

    cur_indx=pr_indx;
   } 
 }
  
   for (int value : v)
   {
    cout<<value<<" ";
   }

   
    return 0;
}