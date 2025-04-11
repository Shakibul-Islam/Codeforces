#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    for (int t = 0; t < T; t++) {
        if (t > 0) {
            // Read the blank line between test cases
            string blank;
            getline(cin, blank);
        }

        int N;
        cin >> N; // Number of children
        long long totalCandies = 0;

        for (int i = 0; i < N; i++) {
            long long candies;
            cin >> candies;
            totalCandies += candies;
        }

        if (totalCandies % N == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

