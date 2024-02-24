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
    optimize()
    int a[5][5];
    int t;
    for(int i = 1; i<=5;i++){
        for(int j = 1;j<=5; j++){
            int tmp;cin >> tmp;
            if(tmp == 1){
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }

    // for(int i = 0; i<5;i++){
    //     for(int j = 0;j<5; j++){
            
    //         cout << a[i][j] << " ";
    //     } cout << endl;
    // }

    return 0;
}
