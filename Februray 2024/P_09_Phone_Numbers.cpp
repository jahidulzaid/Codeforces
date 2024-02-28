// jahidulZaid
// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

void solve(){
    int n, cnt=0; cin >> n;
    string s;
    cin >> s;
    int i = 0;
    for(;i<n; i++){
        if(s[i]=='8'){
            cnt++;
        }
    }
    if(cnt > n/11){
        cout << n/11<< endl;
    }
    else{
        cout << cnt << endl;
    }
}

int main() {
    optimize();

    solve();

    return 0;
}
