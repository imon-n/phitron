#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v={1,2,3,4,75,8};
//    cout<<v[v.size()-1]; //last element dekar jonno
//   cout<<v.back();// last element dekar jonno..**********imporatnat 
//   cout<<v.front();
//   cout<<v[0];

  //vector<int>::iterator it;
  for (auto it =v.begin(); it<v.end();it++)
  {
    cout<<*it<<endl;
  }
  
   
    return 0;
}