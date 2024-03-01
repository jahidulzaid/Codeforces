//jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void printAllCommonSubsequences(string& s1, string& s2) {
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    set<string> result;

    function<void(int, int, string)> backtrack = [&](int i, int j, string current) {
        if (i == 0 || j == 0) {
            reverse(current.begin(), current.end());
            result.insert(current);
            return;
        }

        if (s1[i - 1] == s2[j - 1]) {
            backtrack(i - 1, j - 1, current + s1[i - 1]);
        }

        if (dp[i - 1][j] >= dp[i][j - 1]) {
            backtrack(i - 1, j, current);
        }

        if (dp[i][j - 1] >= dp[i - 1][j]) {
            backtrack(i, j - 1, current);
        }
    };

    backtrack(n, m, "");

    cout << "All Common Subsequences in Descending Order of Lengths are:\n";
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it << endl;
    }
}

int main() {
    string s1 = "adcbe";
    string s2 = "dcadb";

    printAllCommonSubsequences(s1, s2);

    return 0;
}