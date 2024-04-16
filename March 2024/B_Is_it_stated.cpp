#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; while(t--)
#define ll long long
#define pb push_back

int main() {
    optimize();

    tt {
        string s;
        cin >> s;
        
        bool is_stated = false;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == 'i' && s[i + 1] == 't') {
                is_stated = true;
                break;
            }
        }
        
        if (is_stated) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
