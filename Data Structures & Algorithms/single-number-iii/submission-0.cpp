class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if (nums.size() == 2) {
            return nums;
        }
        uint running_xor = 0;
        for (const auto& num : nums) {
            running_xor ^= num;
        }
        int msb = running_xor & (-running_xor);
        int ans_a = 0, ans_b = 0;
        for (const auto &num : nums) {
            if (num & msb) {
                ans_a ^= num;
            } else {
                ans_b ^= num;
            }
        }
        return {ans_a, ans_b};
    }
};