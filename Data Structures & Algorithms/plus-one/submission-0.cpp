class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        bool carry = true;
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i] += int(carry);
                break;
                carry = false;
            } else {
                carry = true;
                digits[i]++;
                digits[i] %= 10;
            }
        }
        if(accumulate(digits.begin(), digits.end(), 0) == 0) {
            vector<int> ans;
            ans.push_back(1);
            for(int i = 0; i < n; i++) {
                ans.push_back(0);
            }
            return ans;
        }
        return digits;
    }
};
