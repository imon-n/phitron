#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    map<string,int> mp;

   int mx= 0;
   string max_word = "";
   while (ss>>word)
   {
    mp[word]++;
    if(mp[word] > mx)
    {
      mx=mp[word];
      max_word=word;
    }
   }   
    cout << max_word<< " " << mx << endl;

    }      
    return 0;
}
