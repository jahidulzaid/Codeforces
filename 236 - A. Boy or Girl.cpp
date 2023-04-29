    // @JahidulZaid
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    using namespace std;

    int main()
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        // cout << s <<endl;
        
        s.erase(unique(s.begin(), s.end()), s.end());
        // cout << s << endl;
        if (s.size() % 2 == 0) 
            {
                cout << "CHAT WITH HER!" << endl;
            }
        else
            {
                cout << "IGNORE HIM!" << endl;
            }
            
        return 0;
    }
    