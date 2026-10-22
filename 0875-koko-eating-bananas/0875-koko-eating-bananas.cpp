class Solution {
public:
    long long hr_req(vector<int>&nums,int mid){
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int divisor=nums[i]/mid;
            int rem=nums[i]%mid;
            if(rem!=0)ans+=(divisor+1);
            else ans+=divisor;
            
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int ans=INT_MAX;
        int low=1;
        int high=*max_element(begin(piles),end(piles));
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hr=hr_req(piles,mid);
            if(hr<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
            
        }
        return ans;
        
        
    }
};