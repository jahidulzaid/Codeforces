// jahidulZaid
// review

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long


//

int main() {
    ios_base::sync_with_stdio(false);  // Improves I/O performance
    cin.tie(NULL);  // Unties cin from cout for even more performance improvement

    int n, L, a;
    cin >> n >> L >> a;  // Reads the number of customers (n), the length of the workday (L), and the duration of a break (a)

    if (n == 0) {  // If there are no customers, Vasya can take breaks throughout the entire workday
        cout << L / a << "\n";
        return 0;
    }

    int t[n], l[n];  // Arrays to store arrival times and service times of each customer
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> l[i];  // Reads the arrival time and service time of each customer
    }

    int breaks = 0;  // Variable to store the total number of breaks Vasya can take

    // Loop through each customer to calculate breaks
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            breaks += t[0] / a;  // If it's the first customer, count breaks until their arrival time
            continue;
        }

        // Count breaks between consecutive customers
        breaks += (t[i] - t[i - 1] - l[i - 1]) / a;
    }

    // Count breaks after the last customer until the end of the workday
    breaks += (L - t[n - 1] - l[n - 1]) / a;
    
    cout << breaks << "\n";  // Output the total number of breaks Vasya can take
}
