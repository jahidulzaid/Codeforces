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

    int t; cin >> t;
    
    while (t--)
    {
        
        int n; cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {   
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(v[i] == v[j]){
                    cnt++;
                }
                
            }
            if(cnt == 1){
                    cout << i+1 << endl;
                }
            
        }

    }
    return 0;
}
