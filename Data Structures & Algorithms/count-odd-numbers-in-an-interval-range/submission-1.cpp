class Solution {
public:
    int countOdds(int low, int high) {
        if (low == high) {
            return low & 1;
        }
        return (high - low) / 2 + 1;
    }
};