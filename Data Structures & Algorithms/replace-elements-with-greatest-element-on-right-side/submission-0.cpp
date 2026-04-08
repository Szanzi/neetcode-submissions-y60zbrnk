class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        int max1 = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            ans[i] = max1;
            max1 = max(arr[i], max1);
        }
        return ans;
    }
};