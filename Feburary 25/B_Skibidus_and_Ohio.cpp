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

void solve(){
    string str;
    cin >> str;
    int size = str.size();
    for (ll i = 1; i < str.size(); i++) {
        if (str[i-1] == str[i]) {
            cout << "1" << endl;
            return;
        }
    }
    cout << size << endl;;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
