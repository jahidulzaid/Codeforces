#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; while(t--)
#define ll long long
#define pb push_back


int main() {
    optimize();
    int n;
    cin >> n;
    
    vector<int> v(n);
    int ocnt = 0, ecnt = 0, oindex = -1, eindex = -1;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            ecnt++;
            eindex = i + 1;
        } else {
            ocnt++;
            oindex = i + 1;
        }
    }
    
    if (ecnt == 1) {
        cout << eindex << endl;
    } else {
        cout << oindex << endl;
    }
    
    return 0;
}
