class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int ans = 0;
        while(left < right) {
            int water = min(heights[left], heights[right]) * (right - left);
            ans = max(ans, water);
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return ans;
    }
};
