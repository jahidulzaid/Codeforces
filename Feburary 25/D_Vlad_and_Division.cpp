// Bismillahir Rahmanir Rahim
// Jahidul Islam, Green University Of Bangladesh
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> cnt;
    int ans = 0;
    
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        int complement = ((1 << 31) - 1) ^ x;
        
        if (!cnt[x]) {
            ++ans;
            ++cnt[complement];
        } else {
            --cnt[x];
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}