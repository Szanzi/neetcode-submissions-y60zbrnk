class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; 

        vector<bool> sieve(n, true); 
        sieve[0] = sieve[1] = false;
        
        int ans = 0;
        
        for (int i = 2; i < n; i++) {
            if (sieve[i]) {
                ans++;
                
                if ((long long)i * i < n) {
                    for (int j = i * i; j < n; j += i) {
                        sieve[j] = false;
                    }
                }
            }
        }
        
        return ans;
    }
};