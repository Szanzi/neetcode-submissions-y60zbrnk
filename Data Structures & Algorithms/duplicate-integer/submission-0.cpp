class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(const auto& num : nums) {
            if(m[num]) {
                return true;
            }
            m[num] = 1;
        }
        return false;
    }
};