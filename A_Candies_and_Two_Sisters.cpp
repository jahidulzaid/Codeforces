#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; while(t--)
#define ll long long
#define pb push_back


int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Calculate the number of ways to distribute candies
        long long b = (n - 1) / 2;
        long long ways = max(0LL, b);

        cout << ways << endl;
    }

    return 0;
}
