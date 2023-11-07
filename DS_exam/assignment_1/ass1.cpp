#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for (int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   sort(a,a+n);
   bool flage = false;
   //binary searce
for (int i=0; i<n-1; i++)
{               
   int l=i+1,r=n-1;
   while (l<=r)
   {
    int mid_indx = (l+r)/2;
    if (a[mid_indx]==a[i])
    {
        flage=true;
        break;
    }
    if (a[i]>a[mid_indx]) l=mid_indx+1;
    else r=mid_indx-1;
   }            
}
   if(flage==true) cout<<"YES"<<endl;     
   else cout<<"NO"<<endl; 

    return 0;
}
