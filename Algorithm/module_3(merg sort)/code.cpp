#include<bits/stdc++.h>
using namespace std;
void merge(vector < int > & nums,int l,int r,int mid)
{
    int left_size = mid-l+1;
    int le[left_size+1];

    int right_size = r -(mid+1)+1;//confused hote paro
    int ri[right_size+1];

    for (int i=l,j=0; i<=mid; j++,i++)
    {
        le[j]=nums[i];
    }
    for (int i=mid+1,j=0; i<=r; j++,i++)
    {
        ri[j]=nums[i];
    }
    le[left_size]=INT_MAX;  //infinity
    ri[right_size]=INT_MAX;

    int lp=0, rp=0;
    for (int i=l; i<=r; i++)
    {
        if(le[lp] <= ri[rp])
        {
            nums[i]=le[lp];
            lp++;
        }
        else
        {
           nums[i]=ri[rp];
           rp++;
        }
    }

}

 void mergesort(vector < int > & arr,int l,int r)
 {
    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,r,mid);
 }

void mergeSort(vector < int > & arr, int n) {
    mergesort(arr,0,n-1);
}