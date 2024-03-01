    // Writter      : @JahidulZaid
    // Problem Link : https://codeforces.com/contest/1722/problem/B
    // Language     : c++
    // Date         : 8/6/2023

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

void printVec(vector<char> v){
    for(int i = 0; i<v.size(); i++){
        cout<< v[i];
    }
    cout << endl;
}   



int main()
{

    int t; cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        string s1, s2;
        cin >> s1 >> s2;
        for(int i=0; i<n-1;i++){
            if ((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')) {
                cout<< "NO"<< endl;
            }
        }
        cout<< "NO"<< endl;

    }

    return 0;
}
