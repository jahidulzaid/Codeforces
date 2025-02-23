// Bismillahir Rahmanir Rahim
// Jahidul Islam, Green University Of Bangladesh
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define llt long long int
#define pb push_back

#ifdef LOCAL
#include "debug.h"
#endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

bool div(llt n){
    return (n & (n-1)) != 0;
}
int64_t hello(llt n){

    vector<int> notes(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> notes[i];
    }
    // melody perfect if the interval is either 5  or 7 .

    bool tr = true;
    for (int i = 0; i < n - 1; ++i) {
        int interval = abs(notes[i] - notes[i + 1]);
        if (interval != 5 && interval != 7) {
            tr = false;
            break;
        }
    }

    cout << (tr ? "YES" : "NO") << endl;
}


int main() {
    optimize;
    int t;
    cin >> t;

    while (t--) {
        llt n;
        cin >> n;
        hello(n);
    }

    return 0;
}