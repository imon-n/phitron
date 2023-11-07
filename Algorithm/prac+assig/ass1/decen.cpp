#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int arr[N];

void merge(int l,int r,int mid)
{
    int left_sz=mid-l+1;
    int left[left_sz];

    int right_sz= r -(mid+1)+1;
    int right[right_sz];

    for (int i=l,j=0; i<=mid; j++,i++)
    {
        left[j]=arr[i];
    }

    for (int i=mid+1,j=0; i<=r; j++,i++)
    {
        right[j]=arr[i];
    }
    left[left_sz]=INT_MIN;  
    right[right_sz]=INT_MIN;
     
    int lp=0,rp=0;
    for (int i=l; i<=r; i++)
    {
        if (left[lp] >= right[rp])
        {
            arr[i]=left[lp];
            lp++;
        }
        else
        {
            arr[i]=right[rp];
            rp++;
        }        
    } 
}

void mergesort(int l,int r)
{
    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);

}
int main(){
   int n;
   cin>>n;
   for (int i=0; i<n; i++)
   {
     cin>>arr[i];  
   }

   mergesort(0,n-1);

    for (int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
   
    return 0;
}