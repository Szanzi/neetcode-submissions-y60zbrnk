// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {

public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        if (pairs.size() == 0) {
            return {};
        }
        vector<vector<Pair>> ans;
        int n = pairs.size();
        ans.push_back(pairs);
        for (int i = 1; i < n; i++) {
            Pair currPair = pairs[i];
            int j = i - 1;
            while(j >= 0 && pairs[j].key > currPair.key) {
                pairs[j + 1] = pairs[j];
                j = j - 1;
            }
            pairs[j + 1] = currPair;
            ans.push_back(pairs);
        }
        return ans;
    }
};
