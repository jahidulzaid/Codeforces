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

    int t; cin>> t;
    string s;cin>>s;

    vector<int>v(29);
    if(t == 1){
        cout<< "YES"<<endl;
        return 0;
    }
    for(int i = 0; i<t;i++){
        v[s[i] - 'a']++;
    }

    bool c = false;
    for(int i = 0; i<29; i++){
        if(v[i]>1){
            c =  true;
            break;
        }
    }

    if(c){
        cout<< "YES" << endl;
    }
    else{
        cout<< "NO" << endl;
    }
    
    

    // debug(v);
    return 0;
}