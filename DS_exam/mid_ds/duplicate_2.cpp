#include<bits/stdc++.h>
using namespace std;
int main(){
    int v;
    list<int> mylist;
    while (true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
     mylist.push_back(v);
    }
   mylist.sort();
   mylist.unique(); 
   for (int vv : mylist) 
    {
        cout << vv <<" ";
    }   
    return 0;
}
