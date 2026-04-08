class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        unordered_map<int,int> m;
        int ans = 1;
        for(const auto& num : nums) {
            if(m[num - 1]) {
                m[num] = m[num - 1] + 1;
                ans = max(ans, m[num]);
            } else {
                m[num] = 1;
            }
        }
        return ans;
    }
};
