class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n + 1, 1), suffix(n + 1, 1);
        prefix[1] = nums[0]; 
        for(int i = 1; i < n; i++) {
            prefix[i + 1] = prefix[i] * nums[i];
        }
        suffix[n - 2] = nums[n - 1];
        for(int i = n - 2; i > 0; i--) {
            suffix[i - 1] = suffix[i] * nums[i];
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(suffix[i] * prefix[i]);
        }
        return ans;
    }
};
