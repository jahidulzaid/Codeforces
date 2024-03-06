// Bismillahir Rahmanir Rahim
// jahidulZaid
// 
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
    tt;
    while(t--){
        ll a, b, n;
        cin>>a>>b>>n;
        // ll c = b;
        vector<ll> v(n);

        for(int i = 0; i<n;i++){
            cin>> v[i];
        }
        ll sum = b;
        for(int i = 0;i<n;i++){{
            if(v[i]+1 <= a){
                sum += v[i];
            }else{
                sum = sum + a - 1;
            }
        }
            
        }
        cout << sum << endl;

        // debug(sum);
    }
    return 0;
}