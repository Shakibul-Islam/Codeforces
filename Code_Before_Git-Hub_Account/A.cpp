#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<int, int> countPrimeFactors(int num) {
    unordered_map<int, int> factors;
    while (num % 2 == 0) {
        factors[2]++;
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factors[i]++;
            num /= i;
        }
    }
    if (num > 1) {
        factors[num]++;
    }
    return factors;
}

int longestSubarrayWithAlmostPrimes(const vector<int>& A, int K) {
    int left = 0, right = 0;
    int maxSubarray = 0;
    unordered_map<int, int> factorCount;

    while (right < A.size()) {
        unordered_map<int, int> factors = countPrimeFactors(A[right]);
        for (const auto& factor : factors) {
            factorCount[factor.first] += factor.second;
        }

        while (!factorCount.empty()) {
            bool perfectFactor = all_of(factorCount.begin(), factorCount.end(),
                [](const pair<int, int>& factor) {
                    return factor.second >= 1;
                });

            if (perfectFactor) {
                unordered_map<int, int> factorsToRemove = countPrimeFactors(A[left]);
                for (const auto& factor : factorsToRemove) {
                    factorCount[factor.first] -= factor.second;
                    if (factorCount[factor.first] == 0) {
                        factorCount.erase(factor.first);
                    }
                }
                left++;
            } else {
                break;
            }
        }

        int almostPrimeCount = count_if(factorCount.begin(), factorCount.end(),
            [](const pair<int, int>& factor) {
                return factor.second >= 1;
            });

        if (almostPrimeCount == K) {
            maxSubarray = max(maxSubarray, right - left + 1);
        }

        right++;
    }

    return maxSubarray;
}

int main() {
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = longestSubarrayWithAlmostPrimes(A, K);
        cout << "Case " << caseNumber << ": " << result << endl;
    }

    return 0;
}
