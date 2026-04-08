class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            unsigned long long mids = 1LL * mid * mid;
            if(mids == x) {
                return mid;
            }
            if(mids < x) {
                low = mid + 1;
            } else high = mid - 1;
        }
        return low - 1;
    }
};