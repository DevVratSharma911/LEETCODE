class Solution {
public:
    bool is_possible(vector<int>& nums,int mid,int k){
        int ans=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                ans++;
                sum=nums[i];
            }
        }
        if(ans<=k)return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=nums[0];
        int high=0;
        int ans=0;
        for(int x:nums){
            high+=x;
            if(x>low)low=x;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(is_possible(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};