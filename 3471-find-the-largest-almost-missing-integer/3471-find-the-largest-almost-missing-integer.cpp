class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int>mp;
        for(int x:nums)mp[x]++;
        
        if(k==n || k==1){
            int max=-1;
            for(int x:nums){
                if(x>max && mp[x]<=k)max=x;
            }
            return max;
        }
        if(mp[nums[0]]<2 && mp[nums[n-1]]<2){
            if(nums[0]>nums[n-1])return nums[0];
            return nums[n-1];
        }
        if(mp[nums[0]]>1){
            if(mp[nums[n-1]]<2)return nums[n-1];
           
        }
        if(mp[nums[n-1]]>1){
            if(mp[nums[0]]<2)return nums[0];
        }
        return -1;
        
    }
};