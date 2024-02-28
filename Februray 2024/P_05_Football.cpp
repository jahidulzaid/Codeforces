// jahidulZaid
// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int cnt = 0; 
    int i =0;
    
    string s;
    cin >> s;
    int v=1;
    for(;i<s.size(); i++){
        if(s[i]== s[i-1]){
            cnt++;
            // cout << cnt;
        }
        else{
            v =   max(cnt , v);
            cnt = 1;
        }
    }
    v = max(cnt, v);

    if(v >= 7){
        cout << "YES" << endl;
    }
    if(v < 7){
        cout << "NO" << endl;
    }

    
    return 0;
}
