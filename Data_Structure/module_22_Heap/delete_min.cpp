#include<bits/stdc++.h>
using namespace std;
void insert_min(vector<int> &v, int x)
{
    v.push_back(x);
       int cur_indx=v.size()-1;
       while (cur_indx !=0)
       {
         int pr_indx = (cur_indx-1)/2;
         if (v[pr_indx] > v[cur_indx])
         {
           swap(v[pr_indx] , v[cur_indx]);
         }
         else 
          break;
          cur_indx = pr_indx;
       }   
}
void delete_min(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur_ind = 0;
    while (true)
    {
        int left_ind = cur_ind * 2 +1;
        int right_ind = cur_ind * 2 +2;
        int last_ind = v.size()-1;

        if (left_ind <= last_ind && right_ind <= last_ind)
        {
            if(v[left_ind] <= v[right_ind] && v[left_ind] < v[cur_ind])
            {
                swap(v[left_ind] , v[cur_ind]);
                cur_ind = left_ind;
            }
            else if (v[left_ind] >= v[right_ind] && v[right_ind] < v[cur_ind])
            {
                swap(v[right_ind] , v[cur_ind]);
                cur_ind = right_ind;
            }
            else
            {
               break;
            }
        }
        else if (left_ind <= last_ind)
        {
              if(v[left_ind] <= v[cur_ind])
            {
                swap(v[left_ind] , v[cur_ind]);
                cur_ind = left_ind;
            }
            else
            {
                break;
            }
        }
        else if (right_ind <= last_ind)
        {
            if(v[right_ind] <= v[cur_ind])
            {
                swap(v[right_ind] , v[cur_ind]);
                cur_ind =right_ind;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
                
    }
}
int main(){
    vector<int>v;
   int n;
   cin>>n;
   for (int i=0; i<n; i++)
   {
       int x;
       cin>>x;
       insert_min(v,x);
   }

   delete_min(v);

   for (int i:v)
   {
       cout<<i<<" ";
   }
   
    return 0;
}