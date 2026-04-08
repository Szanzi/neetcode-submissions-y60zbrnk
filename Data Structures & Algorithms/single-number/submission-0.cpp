class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int running = 0;
        for (const auto &num : nums) {
            running ^= num;
        }
        return running;
    }
};
