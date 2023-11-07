#include<bits/stdc++.h>
using namespace std;
void fun(int *&p){
   //p=NULL;   //referencing(&p) korar karone,, (p=ptr) hoye gece
   cout<<"address of &p= "<<&p<<endl;
}
int main(){
   int val=10;
   int *ptr=&val;
   fun(ptr);

   cout<<"address of &p= "<<&ptr<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int *pt){
//    *pt=20;
//    //pt=2; //=====>>derefarrencing(*) na korle,,,value change hbe na
// }
// int main(){
//    int val=10;
//    int *ptr=&val;
//    fun(ptr);
//    cout<<val<<endl;
//    cout<<*ptr<<endl;
//     return 0;
// }
