// jahidulZaid
//

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int n; cin >> n;
    vector<int> v;

    while(n--){
        int temp;
        cin >> temp;
        v.push_back(temp);    

    }
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;


    return 0;
}
