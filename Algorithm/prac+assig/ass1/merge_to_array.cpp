#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int res[N];
void merge(int l,int r,int mid)
{
    int left_size = mid-l+1;
    int le[left_size+1];

    int right_size = r -(mid+1)+1;//confused hote paro
    int ri[right_size+1];

    for (int i=l,j=0; i<=mid; j++,i++)
    {
        le[j]=res[i];
    }
    for (int i=mid+1,j=0; i<=r; j++,i++)
    {
        ri[j]=res[i];
    }
    le[left_size]=INT_MIN;  
    ri[right_size]=INT_MIN;

    int lp=0, rp=0;
    for (int i=l; i<=r; i++)
    {
        if(le[lp] >= ri[rp])
        {
            res[i]=le[lp];
            lp++;
        }
        else
        {
           res[i]=ri[rp];
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
   int n,m;
    cin>>n; 
    int arr1[n];
   for (int i=0; i<n; i++)
   {
       cin>>arr1[i];
   }

   cin>>m;
   int arr2[m];
   for (int i=0; i<m; i++)
   {
       cin>>arr2[i];
   }
    int t=n+m;
   for (int j=0; j<n; j++)
   {
       res[j]=arr1[j];
   }
   for (int j=0; j<m; j++)
   {
       res[n+j]=arr2[j];
   }

    mergesort(0,t-1);
   
   for (int i=0; i<t; i++)
   {
       cout<<res[i]<<" ";
   }

   
    return 0;
}

