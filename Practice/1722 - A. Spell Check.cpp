    // Writter      : @JahidulZaid
    // Problem Link : https://codeforces.com/contest/1722/problem/A
    // Language     : c++
    // Date         : 8/6/2023
    
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{

    int t; cin>> t;
    while (t--)
    {
        int n; cin>> n;
        string s,given;
        
        cin >> s;
        given = "Timur";
        // for(int i =0; i< s.length(); i++){
        //     if (s.at(i) == 'T' ){
        //         cout<< "YES"<< endl;
        //     }s
        // }
        sort(s.begin(), s.end());
        sort(given.begin(), given.end());

        if (s == given){
            cout<< "YES"<< endl;
        }
        else cout << "NO" << endl;
        
    }

    return 0;
}
