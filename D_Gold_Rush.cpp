//jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 

void solve(){
    int a, b;
    cin >> a >> b;
    int x = a/3;


    if( 2*x == b || a == b){
        cout << "YES" << endl;
    }

    if(a % 3 != 0){
        cout << "NO" << endl;
        return;
    }

}

int main() {
    optimize();
    tt;
    while(t--){
        solve();
    }

    return 0;
}
