// Bismillahir Rahmanir Rahim
// Jahidul Islam, Green University Of Bangladesh
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define llt long long int
#define pb push_back

#ifdef LOCAL
#include "debug.h"
#endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        unordered_map<int, int> b;
        
        for (int i = 0; i < k; ++i) {
            int brand, cost;
            cin >> brand >> cost;
            b[brand] += cost;
        }
        
        vector<int> earn;
        for (auto x : b) {
            earn.push_back(x.second);
        }
        
        sort(earn.rbegin(), earn.rend());
        
        int maxEarn = 0;
        for (int i = 0; i < min(n, (int)earn.size()); ++i) {
            maxEarn += earn[i];
        }
        
        cout << maxEarn << endl;
    }
    
    return 0;
}