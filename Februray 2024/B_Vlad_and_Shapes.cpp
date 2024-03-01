#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long


void solve()
{   
    int n;
    cin >> n;
    vector<vector<char>>v(n, vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }

    int cnt = 0;
    bool flag = 0;
    
    vector<int>ans(2);
    int a = 0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(v[i][j] == '1'){
                cnt++;
                flag = 1;
            }
        }
        if(flag == 1){
            ans[a] = cnt;
            a++;
        }
        if(a == 2) break;

    }
    
    if(ans[0] != ans[1]) cout << "TRIANGLE" << endl;
    else cout << "SQUARE" << endl;


}    

int main()
{
    optimize();
      
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}