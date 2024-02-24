// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();
    ll n, cnt = 0; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>> v[i];
        if(v[i] == v[i-1]){
            continue;
        }else{
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
