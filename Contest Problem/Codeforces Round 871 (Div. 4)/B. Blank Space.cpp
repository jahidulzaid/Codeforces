    // @JahidulZaid
    // https://codeforces.com/contest/1829/problem/B
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'
    using namespace std;

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            int arr[100];
            int n;
            cin >> n;
            for (int i = 0; i < n; i++){
                cin>> arr[i];
            }
            int current = 0, max = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) {
                    current++;
                } else {
                    current = 0;
                }
                if (current > max) {
                    max = current;
                }
            }
            cout << max << endl;
        }
        return 0;
    }
    
    