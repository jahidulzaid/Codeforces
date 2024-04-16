// Bismillahir Rahmanir Rahim
// jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

#ifdef LOCAL
#include "debug.h"
#endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

bool dif(ll a, ll b){
    if(abs(a-b) < 10) return 1;
    else return 0;
}

int main() {
    optimize();
    tt;
    while(t--){
        ll a,b; cin >> a >> b;
        int c = 0;
        ll diff = abs(a - b);
        c = diff/10;
        ll rem = diff%10;

        if(rem>0){
            c++;
        }
        cout << c << endl;  
        
    }
    return 0;
}