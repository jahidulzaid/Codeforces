// jahidulZaid
// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02

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
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++){
        sum += v[i];
    }
    cout << sum << endl;
    


    return 0;
}
