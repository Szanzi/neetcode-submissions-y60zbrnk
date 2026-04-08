class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        bool neg = (x < 0);
        if(neg) {
            x = abs(x);
        }
        while(x) {
            if(INT_MAX / 10 - (x % 10) <= ans) {
                return 0;
            }
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        if(ans < 0) {
            return 0;
        }
        return (neg ? -ans : ans);
    }
};
