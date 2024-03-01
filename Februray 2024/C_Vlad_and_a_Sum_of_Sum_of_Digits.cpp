// jahidulZaid
// https://codeforces.com/contest/1926/problem/C

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int n,r; cin >> n;
    int sum = 0;
    int td;
    while(n--){
        int t; 
        cin >> t;
        for(int i = 0; i<t; i++){
            sum +=i;
            for(int i = 0; i<t; i++){
                sum +=i;
            }

            cout << sum << endl;    

        }
        

    }

    return 0;
}
