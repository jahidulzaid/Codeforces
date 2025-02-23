// jahidulZaid
// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 

int main() {
    optimize();

    int n;
    cin >> n;

    string m[] = {"I love", "I hate"};
    string res = "I hate";

    for (int i = 2; i <= n; i++) {
        res += " that " + m[i % 2];
    }

    res += " it";
    cout << res << endl;
    return 0;
}
