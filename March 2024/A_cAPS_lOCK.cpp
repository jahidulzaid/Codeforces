// Bismillahir Rahmanir Rahim
// jahidulZaid
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

// #ifdef LOCAL
// #include "debug.h"
// #endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif

int main() {
    optimize();
    string s; cin >> s;
    string temp = s;

    int size= s.size();
    int cnt = 0;
    bool C = true;
    for(int i = 1;i<size;i++){
        C = C && isupper(s[i]);
    }
    if(C || s.size()==1){
        for(int i = 1;i<size;i++){
            s[i] = tolower(s[i]);
        }
        if(isupper(s[0])){
            s[0] = tolower(s[0]);
        }else{
            s[0] = toupper(s[0]);
        }
    }
    cout << s << endl;


    // debug();
    return 0;
}