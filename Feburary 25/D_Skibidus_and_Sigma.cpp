#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;  // n arrays, each of length m
        vector<int> arraySums(n);

        // Reading each array and calculating the sum of elements
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                sum += x;
            }
            arraySums[i] = sum;
        }

        // Sort the array sums in descending order to maximize the score
        sort(arraySums.rbegin(), arraySums.rend());

        // Calculate the maximum score
        long long score = 0, currentSum = 0;
        for (int i = 0; i < n; ++i) {
            currentSum += arraySums[i];
            score += currentSum;
        }

        // Output the result
        cout << score << endl;
    }

    return 0;
}
