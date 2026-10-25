class Solution {
public:
    int calSum(vector<int>& nums,int mid){
        int sum=0;
        for(int x:nums){
            int divisor=x/mid;
            int rem=x%mid;
            if(rem!=0)sum+=(divisor+1);
            else sum+=divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(begin(nums),end(nums));
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=calSum(nums,mid);
            if(sum<=threshold){
                if(mid<ans)ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};