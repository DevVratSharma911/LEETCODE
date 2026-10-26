class Solution {
public:
     int caldays(vector<int>&nums,int mid){
         int ans=1;
         int sum=0;
         for(int i=0;i<nums.size();i++){
             if(sum+nums[i]<=mid)sum+=nums[i];
             else{
                 sum=nums[i];
                 ans++;
             }
         }
         return ans;
         
     }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(begin(weights),end(weights));
        int high=accumulate(begin(weights),end(weights),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int day=caldays(weights,mid);
            if(day<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
        
    }
};