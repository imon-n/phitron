#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<char>st;
   int test;
   cin>>test;
   while (test--)
   {  
    string p;
    cin>>p;

    while (!st.empty())
    {
      st.pop();
    }
    
   for (char ch:p)
   {
     if (ch=='A')
     {
        if (!st.empty() && st.top() =='B')
        {
            st.pop();
        }
        else
        {
            st.push('A');
        }       
     }

     else if (ch=='B')
     {
        if (!st.empty() && st.top() =='A')
        {
            st.pop();
        }
        else
        {
            st.push('B');
        }  
     }   
   }
      if (!st.empty())
       cout<<"NO"<<endl;
      else
       cout<<"YES"<<endl;
   }
    return 0;
}

