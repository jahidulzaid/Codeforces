// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/1669/B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();
    tt;
    
    // unordered_map<int, int> map;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];

        }
        
        sort(v.begin(), v.end());
        long cnt= -1;
        for(long i = 2; i< n; i++){
            if(v[i-2] == v[i] && v[i-1] == v[i]){
                cnt = v[i]; 
                break;
            }
            

        }
        cout << cnt << endl;
        
        
    }

    return 0;
}
