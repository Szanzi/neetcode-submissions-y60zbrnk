class Solution {
public:
    bool isValid(string strs) {
        stack<char> stk;
        unordered_map<char,char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';
        for(const auto& str : strs) {
            if (str == '(' or str == '[' or str == '{') {
                stk.push(str);
            } else {
                if(stk.empty()) {
                    return false;
                }
                char t = stk.top();
                stk.pop();
                if(t != m[str]) {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
