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
    tt
    int n = t;
    vector<int> v(n);
    
    bool hard = false;
    for(int i = 0;i<n;i++) {
        int test;
        cin >> test;
        if(test ==1){
            hard = true;
            break;
        }
    }
    if(hard){
        cout<< "HARD" << endl;
    }else{
        cout<< "EASY" << endl;
    }


    return 0;
}
