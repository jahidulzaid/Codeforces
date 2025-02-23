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
    int n; cin >> n;
    int cnt= 0;
    vector<int> primeDivs(n+1, 0);

    for(int i  = 2; i<=n; i++){
        if(primeDivs[i] == 0){
            for(int j = i;j<n; j+=i){
                primeDivs[j]++;
            }
        }
    }
    int almostPrime = 0;
    for(int i = 2; i<=n;i++){
        if(primeDivs[i]==2){
            almostPrime++;
        }
    }
    cout << almostPrime << endl;

    return 0;
}