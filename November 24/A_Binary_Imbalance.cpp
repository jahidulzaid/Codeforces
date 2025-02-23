//jahidulZaid
//https://codeforces.com/contest/1902/problem/A


#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
/*
3
2
00
2
11
2
10
*/

int main() {
    optimize();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char>v(n);

        int cnt = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == '1') cnt++;
        }
       
       if(cnt == n) cout << "NO" << endl;
       else cout << "YES" << endl;

       
    }

    return 0;
}
