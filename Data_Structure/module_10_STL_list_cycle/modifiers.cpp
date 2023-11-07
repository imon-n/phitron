#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int> mylist={10,20,30,40,50,30,70};
   list<int> newList ;
//   // newList=mylist; // newList.assign(mylist.begin(),mylist.end()); 
//     for (int val1 : newList)
//     {
//         cout << val1 << endl;
//     }

   vector<int> v = {600, 700, 800};

//    mylist.pop_back();

//    mylist.pop_front();

   //mylist.insert(next(mylist.begin(),3),1000);
    mylist.insert(next(mylist.begin(),3),v.begin(),v.end());
    for (int val : mylist)
    {
        cout << val << endl;
    }

//mylist.erase(next(mylist.begin(),2));
//mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
 
//  replace(mylist.begin(),mylist.end(),30,6666);
//    for (int val : mylist)
//     {
//         cout << val << endl;
//     }

//     auto it=find(mylist.begin(),mylist.end(),70);
//     if (it==mylist.end())
//     {
//         cout<<"not found"<<endl;
//     }
//     else
//     {
//         cout<<"foud"<<endl;
//     }
    
    
    //cout<<*it<<endl;
   
    return 0;
}