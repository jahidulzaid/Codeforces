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


#ifdef LOCAL
#include "debug.h"
#endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

int main() {
    optimize();
    int n, h;cin>>n>>h;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>> v[i];
    }
    int sum = 0;
    for(auto x: v){
        // debug(x);
        if(x>h){
            sum+=2;
        }else{
            sum++;
        }
    }
    cout << sum <<endl;

    


    return 0;
}