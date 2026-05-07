class Solution {
public:
    int countPrimes(int n) {
        vector<bool> sieve(n + 1, true);
        sieve[0] = sieve[1] = false;
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            for (int j = 2 * i; j <= n; j += i) {
                sieve[j] = false;
            }
            ans = ans + (sieve[i] && i < n);
        }
        return ans;
    }
};