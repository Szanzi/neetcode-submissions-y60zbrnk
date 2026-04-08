class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(m[target - nums[i]]) { 
                return {m[target - nums[i]] - 1, i};
            }
            m[nums[i]] = i + 1;
        }
        return {1,1};
    }
};
