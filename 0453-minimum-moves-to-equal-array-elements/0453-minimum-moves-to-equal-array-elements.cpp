class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long ans=0;
        int  min=*min_element(nums.begin(),nums.end());
        for(int x:nums){
            ans+=x-min;
        }
        return ans;
        
    }
};