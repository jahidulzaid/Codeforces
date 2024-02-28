// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

signed main() {
    optimize();
    // tt
    ll n;
    int a, b; cin>>a>>b;
    vector<int>v1,v2;
    int year;
    for(int i = 1;i<10;i++){
        a*=3;
        b*=2;
        if(a>b){
            year = i;
            break;
        }

    }
    cout << year << endl;
    

    return 0;
}
