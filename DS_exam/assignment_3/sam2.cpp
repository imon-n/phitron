#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int>s1;
  queue<int>q;
  int n,m;
  cin>>n>>m;
  for (int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    s1.push(x);
  }
  for(int i=0; i<m; i++)
   {
    int x;
    cin>>x;
    q.push(x);
   }

  int flag=0;
  if (n!=m)
  {
    flag=1;
  }
  else 
  {
    while (!s1.empty() && !q.empty())
    {
        if (s1.top() != q.front())
        {
          flag=1;
          break;
        } 

       s1.pop();
       q.pop();
    }   
  }

  if (flag==0)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }  
    return 0;
}
