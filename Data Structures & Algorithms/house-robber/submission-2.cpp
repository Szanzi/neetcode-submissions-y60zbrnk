class Solution {
public:
    int rob(vector<int>& nums) {
        int rabolt = 0;
        int nemRabolt = 0;
        for (const auto& num : nums) {
            int aktualisNemRabolt = max(rabolt, nemRabolt);
            int aktualisRabolt = nemRabolt + num;
            rabolt = aktualisRabolt;
            nemRabolt = aktualisNemRabolt;
        }    
        return max(rabolt, nemRabolt);
    }
};
