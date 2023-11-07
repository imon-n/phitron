#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;   // bst+sort+avoid duplicate+ O(nlog)+searcing
                    
   int n;
   cin>>n;
   while (n--)
   {
    int x;
    cin>>x;
    s.insert(x);  // O(logN)
   }

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    cout<<s.count(100)<<endl; // O(logN),,,,//jodi value ta takhe tahole,,,, 1 ,,,,print korbe
    cout<<s.count(10)<<endl; // O(logN),,,,//jodi value ta takhe tahole,,,, 0 ,,,,print korbe
   
   
    return 0;
}