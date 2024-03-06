// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

// #ifdef LOCAL
// #include "debug.h"
// #endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

int main() {
    optimize();
    string p;
    cin >> p;
    vector<char> v;

    for(int i = 0; i<p.size(); i++){
        if(isupper(p[i])){
            v.pb(p[i]);
        }
        else if(isdigit(p[i])){
            v.pb(p[i]);
        }
    }
    // debug(v);
    int cnt = 0;
    for(int i = 0;i<v.size(); i++){
        if(v[i] == 'H' || v[i] == 'Q'|| v[i] == '+' || v[i] == '9'){
            cnt++;
        }

    }
    cnt > 0 ? cout<< "YES" : cout << "NO";
    cout << endl;

    

    // debug();
    return 0;
}