class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        int ans = 0;
        int mask = INT_MAX;
        for(int i = 0; i < 32; i++) {
            int a_bit = (a >> i) & 1;
            int b_bit = (b >> i) & 1;
            int curr = a_bit ^ b_bit ^ carry;
            carry = (a_bit + b_bit + carry) >= 2;
            if(curr) {
                ans |= (1 << i);
            } 
        }
        if(ans > 0x7FFFFFFF) {
            ans = ~(ans ^ mask);
        }
        return ans;
    }
};
