#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;

};
int main(){
    int n;
    cin>>n;
    student a[n];
    for(int i = 0;i<n;i++)
    { 
        getline(cin,a[i].nm);
        cin>>a[i].cls;
        cin>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        // cin.ignore(); 
    }
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    
}

// 3
// Rakib 7 B 90 85
// Sakib 10 A 85 61
// Ahsan 9 C 36 58