    // @JahidulZaid
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        string j;
        getline(cin, j);
        int mined=0;
        for(int i =0; i<j.size(); i++){
            if(j[i]==j[i+1]){
                mined++;
                break;
            }
        cout << mined << endl;
        }    
        return 0;
    }
