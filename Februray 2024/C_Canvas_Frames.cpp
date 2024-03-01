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
    int n; cin >> n;
    map<int,int> mp;
    int v[101];
    for (int i = 0; i < n; i++)
    {
        cin>> v[i]; 
        mp[v[i]]++;
    }
    int cnt=0, f;
    for(auto it: mp){
        f = it.second;
        if(f>=2){
            cnt +=f/2;
        }

    }
    cout << cnt/2 << endl;
    return 0;
}
