class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increasing=1;
        int decreasing=1;
        int temp1=1;
        int temp2=1;
        int n=nums.size();
        int i=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])temp1++;
            else{
                
                increasing=max(temp1,increasing);
                temp1=1;
            }
            if(nums[i]<nums[i-1])temp2++;
            else{
                decreasing=max(decreasing,temp2);
                temp2=1;
            }
            increasing=max(temp1,increasing);
            decreasing=max(temp2,decreasing);
        }
        return max(increasing,decreasing);
        
    }
};