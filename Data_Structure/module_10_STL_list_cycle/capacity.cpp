#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int>myList={10,20,30,4,5,6};
   //cout<<myList.max_size();  // capacity/maximum size nei ,,karon linklist proyujon unujayi meomory te jayga ney
   //myList.clear();

  myList.resize(2);
  myList.resize(9,7);
  for(int v:myList)
  {
    cout<<v<<endl;
  }
   
    return 0;
}