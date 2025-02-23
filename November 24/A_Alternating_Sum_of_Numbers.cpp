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

signed int main() {
    optimize();
    vector<signed int> v;
    int t;
    
    cin >> t;
    //input
    while(t--){
        signed int sum= 0;
        int a ; cin >> a;
        for(int i = 0;i<a; i++){
            signed int tmp;cin >> tmp;
            v.push_back(tmp);
        }
        int size = v.size();
        for (int i = 0; i<size; i++){
            if (i%2 == 0){
                sum+=v[i];
            }else{
                sum-=v[i];
            }
        }
        cout << sum << endl;
        v.clear();
    }
    
    


    return 0;
}