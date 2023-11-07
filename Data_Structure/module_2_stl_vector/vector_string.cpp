#include<bits/stdc++.h>
using namespace std;
int main(){
  // withoutspcae(using cin)-------------------
//   int n;
//   cin>>n;
//   vector<string>v;
//   for (int i = 0; i <n; i++)
//   {
//     string s;
//     cin>>s;
//     v.push_back(s);
//   }    
  
// // for (int i = 0; i<n; i++)
// //     {
// //         cout<<v[i]<<" ";
// //     }
// for (string f:v)
// {
//     cout<<f<<" ";
// }
   
  // withspace(using getline)-----------------
  int n;
  cin>>n;
  cin.ignore(n);
  vector<string>v(n);
  for (int i = 0; i <n; i++)
  {
   getline(cin,v[i]);
  }
  for (string x:v)
  {
    cout<<x<<endl;
  } 

  return 0;
}
