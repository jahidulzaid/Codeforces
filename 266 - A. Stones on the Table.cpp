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
<<<<<<< HEAD

        while(t--){
            string j;
            getline(cin, j);
            int mined=0;
            for(int i =0; i<j.size(); i++){
                if(j[i]==j[i+1]){
                    mined++;
                    break;
                }
            }
            cout << mined << endl;
=======
        string j;
        getline(cin, j);
        int mined=0;
        for(int i =0; i<j.size(); i++){
            if(j[i]==j[i+1]){
                mined++;
                break;
            }
        cout << mined << endl;
>>>>>>> 79ed3b271756ac1de6c1e5bd873fb4a552f986e1
        }    
        return 0;
    }
