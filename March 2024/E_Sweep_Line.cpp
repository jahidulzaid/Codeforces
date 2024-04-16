#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; while(t--)
#define ll long long
#define pb push_back

const int MOD = 20240401;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int solutions = 1;
    int prev_ones = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            if (prev_ones % 2 == 1) {
                solutions = 0;
                break;
            }
            prev_ones = 0;
        } else if (a[i] == 1) {
            ++prev_ones;
        } else { // a[i] == 2
            if (prev_ones % 2 == 1) {
                solutions = (solutions * prev_ones) % MOD;
            }
            prev_ones = 0;
        }
    }

    cout << solutions << endl;

    return 0;
}
