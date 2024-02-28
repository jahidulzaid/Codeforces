// Bismillahir Rahmanir Rahim
// jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

void solve(){
    int n; cin >> n;
    int a[n];

    ll sum = 0;

    for(int i = 0; i<n; i++){
        int tmp;
        cin >> tmp;
        // a.push_back(tmp);
        a[i] = tmp;
    }
    sort(a, a+sizeof(a)/sizeof(a[0]));
    // sort(a.begin(), a.end());

    for(int i = 1;i<n;i++){
        sum += a[i]  - a[i-1];
    }
    cout << sum << endl;
    


}


int main() {
    optimize();
    tt;
    while(t--){
        solve();
    }

    return 0;
}
