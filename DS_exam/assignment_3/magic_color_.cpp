#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<char>st;  
   int test;
   cin>>test;
while (test--)
{
   int n;
   cin>>n;
   string color;
   cin>>color;
   for (char c:color)
   {
    if (!st.empty())
    {
      if (st.top()==c)
      {
        st.pop();
      }
      
      else if ((st.top()=='R' && c=='B') || (st.top()=='B' && c=='R'))
       {
         st.pop();
         if (!st.empty() && st.top() == 'P')
         {
          st.pop();
         }
         else
         st.push('P');
       }  
       else if ((st.top()=='R' && c=='G') || (st.top()=='G' && c=='R'))
       {
         st.pop();
         if (!st.empty() && st.top() == 'Y')
         {
           st.pop();
         }
         else
         st.push('Y');
       }
       else if ((st.top()=='B' && c=='G') || (st.top()=='G' && c=='B'))
       {
         st.pop();
         if (!st.empty() && st.top() == 'C')
         {
           st.pop();
         }
         else
         st.push('C');
       } 
       else
       {
         st.push(c);
       }
                
    }
    else
    {
      st.push(c);
    }
  } 

  string out;
  while (!st.empty()) 
  {
    out = st.top() + out;
    st.pop();
  }
    cout <<out<< endl;
} 

  return 0;
}
