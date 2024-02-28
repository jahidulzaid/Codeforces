// jahidulZaid
// https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void TLE(){
    long long a , b;
    cin >> a >> b;
    
    vector<int> v;

    for(int i = 1;i <= a; i+=2){
        v.push_back(i);
    }
    // for(auto it: v){
    //     cout << it;
    // }
    

    for(int j = 2;j <= a; j+=2){
        v.push_back(j);
    }
    // for(auto it: v){
    //     cout << it;
    // }
   
    cout << v[b-1] << endl;
}

int main() {
    optimize();

    long long a , b;
    cin >> a >> b;
    if(b <= (a+1)/2){
        cout << 2 * b - 1;
    }else{
        cout << 2 * (b - (a+1)/2) << endl;
    }
    
    



    return 0;
}
