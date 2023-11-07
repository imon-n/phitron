#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        set<int,greater<int>> s;
   int n;
   cin>>n;
   while (n--)
   {
    int x;
    cin>>x;
    s.insert(x);
   }
   for (auto it = s.begin() ; it != s.end(); it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;

  }   
   
    
    return 0;
}