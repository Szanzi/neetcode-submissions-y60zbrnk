class Solution {
public:
    string delimiter = "★";
    string encode(vector<string>& strs) {
        string ans;
        for(const auto& str : strs) {
            ans = ans + str + delimiter;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;
        size_t start = 0;
        size_t end = s.find(delimiter);

        while (end != string::npos) {
            result.push_back(s.substr(start, end - start));
            start = end + delimiter.length(); 
            end = s.find(delimiter, start);
        } 
        return result;
    }
};
