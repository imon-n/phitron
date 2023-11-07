#include<bits/stdc++.h>
using namespace std;
int main(){
   queue<string>q;
   queue<string> newQ;
   int t;
   cin>>t;
   while (t--)
   {
     int n;
     string name;
     cin>>n;
     if (n==0)
     {
        string name;
        cin>>name;
        q.push(name);
     }
     else if(n==1)
     {
        if(!q.empty())
        {
           newQ.push(q.front());
           q.pop();
        }   
        else
            newQ.push("Invalid");           
     }        
   }
   
   while (!newQ.empty())
   {
     cout<<newQ.front()<<endl;
     newQ.pop();
   }
   
   return 0;
}

