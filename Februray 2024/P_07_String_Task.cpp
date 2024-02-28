// jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long


void solve()
{   
    string s;
    cin >> s;
    for (auto x: s){
        x = tolower(x);
        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u'){
            cout << "." << x;
        }
    }


}    

int main()
{
    optimize();
      
    solve();
    return 0;
}