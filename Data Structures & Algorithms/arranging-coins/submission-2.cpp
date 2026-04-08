class Solution {
public:
    int arrangeCoins(int n) {
        if(n <= 1) {
            return n;
        }
        int low = 0, high = n;
        while(low < high) {
            long long mid = low + (high - low) / 2;
            long long can = (mid * (mid + 1)) / 2;
            if(can == n) {
                return mid;
            }
            if(can < n) {
                low = mid + 1;
            }else high = mid;
        }
        return low - 1;
    }
};