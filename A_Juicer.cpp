//jahidulZaid
//https://codeforces.com/contest/709/problem/a

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int n; cin >> n; 
#define ll long long b; cin >> b;
#define ll2 long long d; cin >> d;
#define vi vector<int> v;
int main() {
    optimize();
    tt;
    ll;
    ll2;
    vi;
    
    int temp = n;
    int cnt=0, emp=0;
    while(n--){
        int a; cin >> a;
        if(a<=b){
            cnt +=a ;
            if(cnt>d){
                emp++;
                cnt = 0;
            }
        }

    
    }
    cout << emp <<  endl;
    

    return 0;
}
