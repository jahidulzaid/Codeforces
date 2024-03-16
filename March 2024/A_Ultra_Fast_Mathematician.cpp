// Bismillahir Rahmanir Rahim
// jahidulZaid
// https://codeforces.com/problemset/problem/61/A

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
    string num1, num2;
    cin >> num1 >> num2;

    string result = "";
    for (int i = 0; i < num1.length(); ++i) {


        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
        
    }

    cout << result << endl;

    return 0;
}