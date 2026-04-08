class Solution {
public:
    bool isSubsequence(string s, string t) {
        int match = 0;
        int n = s.size();
        int m = t.size();
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(s[i] == t[j]) {
                match++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return match == n;
    }
};