// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back
// #include "debug.h"

#ifdef LOCAL
#include "debug.h"
#endif

int main() {
    optimize();
    // tt
    int t;
    cin >> t;
    vector<char>v;

    while(t--){
        char x;cin>>x;
        v.push_back(x);
    }
    int cntA = 0, cntD = 0;
    for(auto x:v){
        if(x == 'A'){
            cntA++;
        }else{
            cntD++;
        }
    }
    // debug(v);
    // std::__debug(v);
    cout << (cntA > cntD ? "Anton" : (cntA == cntD ? "Friendship" : "Danik")) << endl;

    // debug(v);



    return 0;
}