// Bismillahir Rahmanir Rahim
// jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();
    ll t; cin>> t;

    ll a, b;
    vector<pair<ll, ll>>v;
    for(ll i = 1; i*i <= t; i++){
        if(t%i==0){
            a = i;
            b = t/i;
            v.push_back({a, b});
            
        }
    }
    
    ll ans = 0;
    for(auto x: v){
        ll d = x.first;
        ll e = x.second;

        if(x.first * x.second == t){
            ans = 2* ( d+e);
        }
    }
    cout << ans << endl;
    return 0;
}
