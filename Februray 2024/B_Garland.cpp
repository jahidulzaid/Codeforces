// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/408/B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt int t; cin >> t; 
#define ll long long
#define pb push_back

int main() {
    optimize();;
    string s1, s2;
    cin >> s1 >> s2;

    int have[26] = {0};
    int need[26] = {0};

    for(auto c: s1){
        have[c-'a']++;
    }
    for(auto c: s2){
        need[c-'a']++;

    }

    int ans = 0;
    for(int i = 0; i<26; i++){
        if(need[i] >0 ){
            if(have[i]==0){ 
                ans = 0;
                break;
            }
            ans += min(have[i], need[i]);
        }

    }
    cout << (ans>0 ? ans:-1);

    return 0;
}
