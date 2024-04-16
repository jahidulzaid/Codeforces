#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; while(t--)
#define ll long long
#define pb push_back


int main() {
    optimize();
    int n, k;
    cin >> n >> k;

    int cnt = 0;
    int scores[n];

    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int kthPlaceScore = scores[k - 1];
    
    // Count participants with scores greater than or equal to the k-th place score
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kthPlaceScore && scores[i] > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}