#include<bits/stdc++.h>
using namespace std;
int main(){
   map<string,int>mp;
   mp.insert({"sakib al hasan",75});
   mp.insert({"tamim",29});
   mp.insert({"samim",711});
   mp.insert({"rahat",95});
   mp.insert({"akib",0});

   cout<<mp["rhhdgfat"]<<endl;  // output = 0    karon eta ekane nai

   //jodi value takhe and seta jodi orginally 0 hoy tahole,,,ei corner case ta solve korar jonno

   if(mp.count("akib"))
   {
    cout<<"ace "<<endl;
   }
   else 
   cout<<"nai"<<endl;
   

//    for (auto it = mp.begin(); it != mp.end(); it++)
//    {
//        cout<< it->first <<" "<< it->second<<endl;
//    }
 
   
    return 0;
}
