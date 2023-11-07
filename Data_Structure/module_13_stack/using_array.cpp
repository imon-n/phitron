#include<bits/stdc++.h>
using namespace std;
class myStack
{
   public:
   vector<int>v;
   void puush(int val)
   {
    v.push_back(val);
   }

   void pop()
   {
    v.pop_back();
   }

   int top()
   {
    return v.back();
   }

   int size()
   {
    v.size();
   }

   bool empty()
   {
     if(v.size()==0)
      return true;
    else
      return false;
   }

};
int main(){
   myStack st;
   int n;
   cin>>n;
   for (int i=0; i<n; i++)
   { 
    int x;
    cin>>x;
    st.puush(x);
   }

   while (!st.empty())  // !st.empty() = st.empty()==false
   {
     cout<<st.top()<<endl;
     st.pop();
   }  
   
    return 0;
}