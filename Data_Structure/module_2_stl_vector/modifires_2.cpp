#include<bits/stdc++.h>
using namespace std;
int main(){
//  //replace--------------------------------------------------
//    vector<int>v={1,2,3,4,5,3,2,3,5,8,3};
//    //replace(v.begin(),v.end()-2,3,66);
//    replace(v.begin(),v.end(),3,66);// ekane v.end(),,,eta null ke point kore ,,, icca korle v.end()-1/2/3/4,,,,icca moto minus kora jabe,,according to needed
//    for (int i:v)
//    {
//     cout<<i<<" ";
//    }   

//find---------------------------------------------------------
//  vector<int>v={1,2,3,48,5,3,2,37,4,5,8,3};
//  vector<int>:: iterator it;
//  it=find(v.begin(),v.end(),8);
//  cout<<*it;

vector<int>v={1,2,3,48,5,3,2,37,4,5,8,3};
// vector<int>:: iterator it=find(v.begin(),v.end(),8);
// cout<<*it;
auto it=find(v.begin(),v.end(),48);
if (it !=v.end())
{
    cout<<"find the value"<<endl;
}
else{
    cout<<"not found the value"<<endl;
}
  
    return 0;
}