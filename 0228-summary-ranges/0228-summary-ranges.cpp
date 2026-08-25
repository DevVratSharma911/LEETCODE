class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (nums.empty())
            return res;
        int l = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i] - 1) {
                if (nums[i - 1] == l) {
                    res.push_back(to_string(l));

                } else {
                    res.push_back(to_string(l) + "->" + to_string(nums[i - 1]));
                }
                l = nums[i];
            }
        }
        if (nums.back() == l) {
            res.push_back(to_string(l));
        } else {
            res.push_back(to_string(l) + "->" + to_string(nums.back()));
        }
        return res;
    }
};