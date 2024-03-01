// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize()
    int n, k;
    cin >> n >> k;

    
    int cnt = 0;
    int x;
    for(int i = 1; i<=k;i++){
        
        if(n%10 == 0 ){
            cnt++;
            n/=10;
        }else{
            n = n-1;
        }

    }
    cout << n << endl;

    return 0;
}
