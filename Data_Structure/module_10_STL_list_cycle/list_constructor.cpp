#include<bits/stdc++.h>
using namespace std;
int main(){
//    list<int> myList;
//    cout<<"size of myList :"<<myList.size()<<endl;  //size

   
    // list<int>list1={1,2,3,4};
    // list<int>myList2(list1);

//     int arr[5]={11,21,3,4,5};
//    list<int>myList2(arr,arr+5);

    vector<int>v={40,46,37};
   list<int>myList2(v.begin(),v.end());

   //---------------------------------------------------------------------
  // list<int> myList2(10,7);
   //cout<<"size of myList2 :"<<myList2.size()<<endl;  //size
   // cout<<myList2.front()<<endl; //to see font value

    // for (auto it=myList2.begin(); it != myList2.end(); it++)
    // {
    //     cout<<*it<<endl;                 //to see all value of myList2
    // }

    for(int val:myList2)
    {                                
        cout<<val<<endl;                   //to see all value of myList2 using range based loop
    }

   
    return 0;
}