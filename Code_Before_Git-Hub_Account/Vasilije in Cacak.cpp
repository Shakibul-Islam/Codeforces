#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // Calculate the sum of the first k natural numbers (1, 2, 3, ..., k)
        long long sum_first_k = k * (k + 1) / 2;

        // Calculate the sum of the last k natural numbers (n-k+1, n-k+2, ..., n)
        long long sum_last_k = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

        // Check if it is possible to choose k distinct integers such that their sum is x
        if (x >= sum_first_k && x <= sum_last_k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
