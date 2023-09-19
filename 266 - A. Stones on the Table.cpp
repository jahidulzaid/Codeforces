    // @JahidulZaid
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int main()
    {
        int t; cin>> t;
        while (t--)
        {
            int n; cin>> n;
            vector<char> s;
            for (int i = 0; i< n; ++i){
                int x; cin>> x;
                s.push_back(x);
            }
            for(int i = 0; i<s.size(); ++i){
                cout << s[i] << endl;
            }
        }
        


        return 0;
    }
    