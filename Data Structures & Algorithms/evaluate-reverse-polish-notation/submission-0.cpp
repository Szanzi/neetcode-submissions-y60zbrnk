class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(const auto& token : tokens) {
            if(token.back() <= '9' && token.back() >= '0') {
                stk.push(stoi(token));
            } else {
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                if(token[0] == '+') {
                    stk.push(a + b);
                } else if(token[0] == '-') {
                    stk.push(a - b);
                } else if(token[0] == '/') {
                    stk.push(a / b);
                } else stk.push(a * b);
            }
        }
        return stk.top();

    }
};
