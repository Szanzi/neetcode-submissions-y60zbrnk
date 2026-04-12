class Solution {
public:
    string convertToTitle(int columnNumber) {
        string temp, ans;
        while(columnNumber) {
            columnNumber--;
            temp.push_back(char(columnNumber % 26 + 'A'));
            ans = temp + ans;
            temp.clear();
            columnNumber /= 26;
        }
        return ans;
    }
};