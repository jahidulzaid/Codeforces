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

int main() {
    optimize;
    llt t;
    cin >> t;
    while(t--){
        llt a;
        cin >> a;
        if(div(a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }


    


    return 0;

}