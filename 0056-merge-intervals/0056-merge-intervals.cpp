class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int pos=0;
        vector<vector<int>>sol;
        int i;
        int maxend=0;
        for(i=0;i<nums.size();i++){
                        
            
            if(i>0 &&(nums[i][0]>maxend)){
                sol.push_back({nums[pos][0],maxend});
            pos=i;
            maxend=nums[i][1];
            }
            maxend=max(maxend,nums[i][1]);

            
        }
        sol.push_back({nums[pos][0],maxend});
        return sol;
    }
};