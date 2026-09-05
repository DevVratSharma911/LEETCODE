class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        
        int mini=INT_MAX;
        int maxi=INT_MIN;
        vector<int>mp(n);
        for(int i=n-1;i>=0;i--){
            if(nums[i]<mini){
                mini=nums[i];
                
            }
            mp[i]=mini;
            
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi)maxi=nums[i];
            
            if( maxi-mp[i]<=k){
                
                
                return i;
            }
        }
        
        return -1;
        
    }
};