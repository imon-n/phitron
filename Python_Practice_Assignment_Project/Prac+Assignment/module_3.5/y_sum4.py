n, t = map(int, input().split())  

for _ in range(t):
    sum = 0
    s, d = map(int, input().split()) 
    
    if 1 <= s <= n and 1 <= d <= n:
        for i in range(s - 1, d):
            sum += a[i]
    
    print(sum)




# #include<bits/stdc++.h>
# using namespace std;
# int main(){
#     int n;
#    cin>>n;
#     int t;
#     cin>>t;
#    int a[n];
#    for (int i=0; i<n; i++)
#    {
#       cin>>a[i]; 
#    }
# while (t--)
# {
#    int sum=0;
#    int s,d;
#    cin>>s>>d;
#    if(s>=0 && d<=n)
#    {
#    for (int i=s-1; i<d; i++)
#    {
#        sum+=a[i];
#    }
#    }
   
#    cout<<sum<<endl;
# }
      
#     return 0;
# }