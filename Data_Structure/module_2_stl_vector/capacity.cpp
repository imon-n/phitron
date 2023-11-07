#include<bits/stdc++.h>
using namespace std;
int main(){
//     //capacity--------------------------
//    vector<int>v;
//    cout<<"size:"<<v.size()<<endl;
//    //cout<<v.max_size()<<endl;
//    v.push_back(10);
//    cout<<v.capacity()<<endl;
//    v.push_back(90);
//    cout<<v.capacity()<<endl;
//    v.push_back(30);
//    cout<<v.capacity()<<endl;
//    v.push_back(40);
//    cout<<v.capacity()<<endl;
//    v.push_back(50);
//    cout<<v.capacity()<<endl;
//    cout<<"size:"<<v.size()<<endl;

//  //clear().=---------------------------------------- 
//    vector<int>v;
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//    v.push_back(40);
//    v.push_back(50);
//    v.clear();
//    cout<<"size:"<<v.size()<<endl;
//    for (int i = 0; i <v.size(); i++)
//    {
//     cout<<v[i]<<" ";
//    }
//    //clear sudu size=0(zero) kore just,,kono value delet kore na
//    // 
//    cout<<v[0]<<endl;
//    cout<<v[1]<<endl;


//resized=----------------------------------------------
   vector<int>v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);
   v.push_back(60);
   v.resize(2);
//   v.resize(4);
//   v.resize(4,7);
   //v.resize(8,9);
   for (int i = 0; i <v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;

   cout<<"size:"<<v.size()<<endl;
   
    return 0;
}