class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0) {
            return 1.0 / myPow(x, -n);
        }
        if(n == 0) {
            return 1;
        }
        double res = myPow(x, n / 2);
        if(n & 1) {
            return res * res * x;
        } else return res * res;
    }
};
