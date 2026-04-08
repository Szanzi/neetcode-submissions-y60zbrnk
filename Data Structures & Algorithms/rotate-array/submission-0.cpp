class Solution {
public:
    void reverse_section(vector<int> &nums, int start, int end) {
        while(start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = n - (k % n);
        reverse_section(nums, 0, k - 1);
        reverse_section(nums, k, n - 1);
        reverse_section(nums, 0, n - 1);

    }
};