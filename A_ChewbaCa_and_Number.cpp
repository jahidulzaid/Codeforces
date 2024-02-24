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
    string s;
    cin >> s;

    int size  = s.size();

    for(int i = 0; i<size; i++){
        if(s[i] > '4'){
            s[i] = '9' - s[i] + '0';
        }
    }
    if(s.front() == '0'){
        s.front() = '9';
    }
    cout << s << endl;

    return 0;
}
