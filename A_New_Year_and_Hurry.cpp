// Bismillahir Rahmanir Rahim
// jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();
    int n, k;
    cin >> n >> k;
    int cnt=0;
    int t = 0, r = 0, total = 0;
    r = 240-k;
    for(int i = 1; i<=n; i++){
        t  = 5*i;
        total += t;
        if(total <= r){
            cnt++;
        }

    }
    cout << cnt << endl;



    return 0;
}
