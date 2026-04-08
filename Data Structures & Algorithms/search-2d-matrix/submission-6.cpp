class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(mid >= n) {
                return false;
            }
            if(matrix[mid][m - 1] < target) {
                low = mid + 1;
            } else high = mid - 1;
        }
        if(low >= n) {
            return false;
        }
        int row = low;
        cout << row;
        low = 0, high = m;
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                low = mid + 1;
            } else high = mid;
        } 
        return false;
    }
};
