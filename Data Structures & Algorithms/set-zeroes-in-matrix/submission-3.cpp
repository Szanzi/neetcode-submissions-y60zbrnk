class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<bool> rowNulled(n, false);
        vector<bool> colNulled(m, false);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                rowNulled[i] = ((matrix[i][j] == 0) || rowNulled[i]);
                colNulled[j] = ((matrix[i][j] == 0) || colNulled[j]);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                matrix[i][j] = (rowNulled[i] || colNulled[j] ? 0 : matrix[i][j]);
            }
        }
    }
};
