// jahidulZaid
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int cnt = 0; 

    int n; cin >> n;
    string v;

    while(n--){
        cin >> v;    
        cnt = v.size();
        if(cnt > 10){
            cout << v[0] << cnt - 2 << v[v.size() -1] << endl;
        }
        else{
            cout << v << endl;
        }
    }
    return 0;
}
