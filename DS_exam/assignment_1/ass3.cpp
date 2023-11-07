#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
      int arr[n];
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }
      bool flage=false;
      for (int i = 0,j=i+1; j<n && i<n-1; j++,i++)
      {
        if (arr[i]>arr[j])
        {
          flage=true;
          break;
        }      
      }
      if (flage==true)
      {
        cout<<"NO"<<endl;
      } 
      else{
        cout<<"YES"<<endl;
      }          
   }  
    return 0;
}