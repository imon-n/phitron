#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> A = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n = A.size();

    int maxleft[n];
    int minRight[n];
    int maxSoFar = A[0]; 
    int minSoFar = A[n - 1]; 

    
    maxleft[0] = A[0]; 
    for (int i = 1; i < n; i++) {
        maxleft[i] = max(maxleft[i+1], A[i - 1]); 
    }


    minRight[n - 1] = A[n - 1]; 
    for (int i = n - 2; i >= 0; i--) {
        minRight[i] = min(minRight[i + 1], A[i]); 
    }

    int flag = 0;
    for (int i = 1; i < n - 1; i++) {
        if (A[i] > maxleft[i] && A[i] < minRight[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}





