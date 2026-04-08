class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> freq(2002);
        for(auto &f : freq) {
            f.first = 0;
        }
        for(const auto& num : nums) {
            freq[num + 1000].first++;
            freq[num + 1000].second = num;
        }
        sort(freq.rbegin(),freq.rend());
        int j = 0;
        vector<int> ans;
        while(j < k) {
            ans.push_back(freq[j].second);
            j++;
        }
        return ans;

    }
};
