// jahidulZaid
// https://codeforces.com/contest/1926/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main() {
    optimize();
    int n; cin >> n;
    string v;

    

    while(n--){
        cin >> v;
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++){
            if(v[i]== 'A'){
                a++;
            }
            if(v[i]== 'B'){
                b++;
            }
        }
        if(a>b){
            cout << "A" << endl;
        }
        if(a<b){
            cout << "B" << endl;
        }
        
        v.clear();

    }

    
    
        


    return 0;
}
