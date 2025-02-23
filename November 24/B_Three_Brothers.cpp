// Bismillahir Rahmanir Rahim
// Jahidul Islam, Green University Of Bangladesh
// 

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

int main() {
    optimize();
    int a, b, ans;
    vector<int> v;
    cin >> a >> b;
    v.push_back(a);v.push_back(b);
    sort(v.begin(), v.end());
    if(v[0]!=1){
        ans = 1;
    }
    else if(v[1]!= 2){
        ans = 2 ;
    }
    else if(v[2]!= 3){
        ans = 3 ;
    }
    cout << ans << endl;
    


    return 0;
}