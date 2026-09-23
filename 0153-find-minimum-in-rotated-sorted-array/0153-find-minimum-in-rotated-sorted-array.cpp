class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int minElement=min(nums[l],nums[r]);
        if(nums[l]<=nums[r])return nums[l];
        while(l<=r){
            if(l==r){
                minElement=min(minElement,nums[l]);
                break;
            }
            int mid=(l+r)/2;
            minElement=min(min(nums[l],nums[r]),min(nums[mid],minElement));
            if(nums[l]<nums[mid]&&nums[r]<nums[mid])l=mid+1;
            else if(nums[l]>nums[mid]&&nums[r]>nums[mid])r=mid-1;
            else if(nums[mid]<nums[l])l=mid+1;
            else r=mid-1;
        }
        return minElement;
    }
};