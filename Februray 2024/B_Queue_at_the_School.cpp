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
    int n, t; cin >> n >> t;
    vector<char> v(n);
    for(int i  = 0; i<n;i++){
        cin>> v[i];
    }  
    // debug(v);
    while(t--){
        for(int i = 0;i<n; i++){
            if(v[i] == 'B' && v[i+1] == 'G'){
                v[i] = 'G' ;
                v[i+1] = 'B';
                i++;
            }
        }
    }
    for(auto x: v)  {
        cout << x;
    }
    cout << endl;
    // debug(v);




    return 0;
}