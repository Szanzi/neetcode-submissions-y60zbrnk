class Solution {
public:
    char findTheDifference(string s, string t) {
        int usedS = 0, usedT = 0;
        if(s.size() == 0) {
            return t[0];
        }
        for(const auto& c : s) {
            usedS ^= (int(c - 'a'));
        }
        for(const auto& c : t) {
            usedT ^= (int(c - 'a'));
        }
        int ans = usedS ^ usedT;
        if(ans < 0) {
            ans = -(usedS ^ usedT);
        }
        cout << ans;
        return char(ans + 'a');
    }
};