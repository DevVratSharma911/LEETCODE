class Solution {
public:
    bool is_valid(vector<int>&nums,int m, int k,int mid){
        int bouquet=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid){
                cnt=0;
                continue;
            }
            else{
                cnt++;
            }
            if(cnt==k){
                bouquet++;
                cnt=0;
            }
        }
        if(bouquet>=m)return true;
        return false;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        if((long long) m*k>n)return -1;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int ans=mx;
        while(mn<=mx){
            int mid=(mn+mx)/2;
            if(is_valid(nums,m, k, mid)){
                ans=mid;
                mx=mid-1;
            }
            else{
                mn=mid+1;
            }
        }
        return ans;
        
    }
};