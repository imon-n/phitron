#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>li;
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {
        li.pop_back();
    }
    int top()
    {
        return li.back();
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {
        if (li.size() == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main(){
   myStack s1;
   myQueue q;
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
