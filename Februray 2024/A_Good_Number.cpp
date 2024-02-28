// Bismillahir Rahmanir Rahim
// jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();

    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        bool present[10] = {false};
        
        // Mark digits present in the number
        for (char c : s) {
            present[c - '0'] = true;
        }
        
        
        bool allPresent = true;
        for (int j = 0; j <= k; ++j) {
            if (!present[j]) {
                allPresent = false;
                break;
            }
        }
        
        if (allPresent) {
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}
