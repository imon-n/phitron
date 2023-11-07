#include<bits/stdc++.h>
using namespace std;
class my_stack
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
     if(li.size()==0)
     return true;
     else
     return false;
   }
};
int main(){
   my_stack st;
   int n;
   cin>>n;
   for (int i=0; i<n; i++)
   {
      int x;
      cin>>x;
      st.push(x);
   }
   while (st.empty() == false)  // !st.empty() = st.empty()==false
   {
     cout<<st.top()<<endl;
     st.pop();
   }   
    return 0;
}