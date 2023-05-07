    // @JahidulZaid
    // https://codeforces.com/contest/1829/problem/A
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'
    int main(){

        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string s, str = "codeforces";
            cin >> s;
            int mined = 0;
            for(int i = 0; i < s.size(); i++)
                if(s[i] != str[i]) mined++;

            cout << mined << endl;
        }

        return 0;
    }
    
    