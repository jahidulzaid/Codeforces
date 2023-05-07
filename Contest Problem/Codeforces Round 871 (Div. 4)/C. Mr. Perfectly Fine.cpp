    // @JahidulZaid
    // https://codeforces.com/contest/1829/problem/C
    // hh
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    #define ff first
    #define ss second
    #define nn "\n"
    #define pb push_back

    void solve(){
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; ++i) {
        int x;
        string s;
        cin >> x >> s;
        v.pb({x, s});
    }
    int i = 0;
    int ans = INT_MAX, lb = INT_MAX, rb = INT_MAX;
    bool ok = false, lok = false, rok = false;
    for (auto &pr : v) {
        if (pr.ss[i] == '0' && pr.ss[i + 1] == '1') {
            rb = min(rb, pr.ff);
            rok = true;
        }
        else if (pr.ss[i] == '1' && pr.ss[i + 1] == '0') {
            lb = min(lb, pr.ff);
            lok = true;
        }
        else if(pr.ss[i] == '1' && pr.ss[i + 1] == '1'){
            ans = min(ans, pr.ff);
            ok = true;
        }
    }
    if (ok && (lok && rok)) {
        ans = min(ans, (lb + rb));
        cout << ans << endl;
    }
    else if (ok) cout << ans << endl;
    else if (rok && lok) cout << (lb + rb) << "\n";
    else cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) solve();
}