class Solution {
private:
    unsigned int blockSize = 3;
    inline unsigned int getBlockIndex(unsigned int row, unsigned int col)
    {
        return (row / blockSize) * blockSize + (col / blockSize);
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> blocks(9, 0);
        for (int i = 0; i < 9; i++) {
            int row = 0, col = 0;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int valRow = board[i][j] - '0';
                    valRow = 1 << valRow;
                    if (row & valRow) {
                        return false;
                    }
                    row |= valRow;
                    int block = getBlockIndex(i, j);
                    if (valRow & blocks[block]) {
                        return false;
                    }
                    blocks[block] |= valRow;
                }
                if (board[j][i] != '.') {
                    int valCol = board[j][i] - '0';
                    valCol = 1 << valCol;
                    if (col & valCol) {
                        return false;
                    }
                    col |= valCol;
                }

            }
        }
        return true;
    }
};
