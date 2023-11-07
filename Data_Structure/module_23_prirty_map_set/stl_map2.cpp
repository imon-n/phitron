#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Sakib al hasn"] = 79; // O(logN)
    mp["tamim"] = 29;
    mp["hjdf"] = 4099;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    cout <<"akib ace ki na : "<< mp.count("akib") << endl;
    cout <<mp["tamim"]<< endl;
    return 0;
}