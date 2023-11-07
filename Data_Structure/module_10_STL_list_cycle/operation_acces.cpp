#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int>mylist = {20, 40, 30, 10, 50, 10, 10};
//    mylist.remove(10);  
//    sort(mylist.begin(),mylist.end());// erokom korle sort hbe na
 
   mylist.sort();
//   mylist.sort(greater<int>());

   mylist.unique(); // uniqe use korar jonno ,,,sort kora joruri
//                   //uniqe= etar kaj hocce same value gulu ke skip kore
  // mylist.reverse();
   for (int val : mylist) 
    {
        cout << val << endl;
    }
   
    return 0;
}