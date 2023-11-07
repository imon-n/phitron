#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;

   int a[n];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }

   int k;
   cin>>k;
   int indx=0;
   bool flage = false;
   int l=0,r=n-1;
   while (l<=r)
   {
    int mid=(l+r)/2;
    if (a[mid]==k) 
    {
        flage=true; 
        indx=mid;
    }
    if (k>a[mid]) l=mid+1;    
    else r=mid-1;
   }

   if(flage==true) cout<<indx; 
   else cout<<"Not Found"<<endl; 
      
    return 0;
}