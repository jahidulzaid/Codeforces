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
    string s; cin>> s;
    
    int cnt  = 0;
    string h = "hello";
    
    // sort(h.begin(), h.end());
    // debug(h);
    
    int j = 0;
    for(int i  = 0;i<s.size();i++){
        {

            while(j<s.size() && h[i]!= s[j]){
                j++;
            }

            if(j == s.size()){
                break;
            }

            cnt++;
            j++;
        }
    }
    // debug(cnt);
    if(cnt == h.size()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
    return 0;
}