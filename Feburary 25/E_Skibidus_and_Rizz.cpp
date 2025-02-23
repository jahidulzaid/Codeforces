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
    int n, m, k;
    cin >> n >> m >> k;

    if (abs(n - m) > k) { // If difference exceeds k, it's impossible
        cout << "-1\n";
        return;
    }

    string result;
    char first = (n >= m) ? '0' : '1'; // Determine which to start with
    char second = (first == '0') ? '1' : '0';
    int cnt1 = max(n, m), cnt2 = min(n, m);

    while (cnt1 > 0 || cnt2 > 0) {
        int take = min(k, cnt1);
        result.append(take, first);
        cnt1 -= take;
        if (cnt2 > 0) {
            result += second;
            cnt2--;
        }
    }

    cout << result << '\n';
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
