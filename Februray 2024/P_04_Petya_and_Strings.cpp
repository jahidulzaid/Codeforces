// jahidulZaid
// 

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int cnt = 0; 

    
    string v, p;
    cin >> v >> p;

    transform(v.begin(), v.end(), v.begin(), ::tolower);
    transform(p.begin(), p.end(), p.begin(), ::tolower);

    if(v>p){
        cout << "1" << endl;
    }
    if(v<p){
        cout << "-1" << endl;
    }if(v == p)
    { cout << "0" << endl;}
    
    return 0;
}
