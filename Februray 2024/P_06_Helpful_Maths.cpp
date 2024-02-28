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
    vector<int> v;
    for(char x: s){
        if(isdigit(x)){
            v.push_back(x - '0');
        }
    }


    sort(v.begin(), v.end());
    // for(auto it: s){
    //      cout << it;
    // }
    
    for(int j = 0; j<v.size(); j++){
        cout << v[j];
        if(j < v.size() -1){
            cout << "+";
        }
        
    }
    


}    

int main()
{
    optimize();
      
    solve();
    return 0;
}