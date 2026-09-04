class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int idx=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi)maxi=nums[i];
            
            int temp=maxi-*min_element(nums.begin()+i, nums.end());
            if(temp<=k && temp<mini){
                if(idx==-1)idx=i;
                else{
                    idx=min(i, idx) ;
                }
                
                mini=temp;
                
            }
        }
        
        return idx;
        
    }
};