class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        for(int i = 0; i < 32; i++) {
            ans = ans + (((1ULL << i) & n) > 0);
        }
        return ans;
    }
};
