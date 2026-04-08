class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int running = 0;
        int n = nums.size();
        for(int i = 1; i <= n; i++) {
            running ^= i;
        }
        int numrunning = 0;
        for(const auto& num : nums) {
            numrunning ^= num;
        }
        return numrunning ^ running;
    }
};
