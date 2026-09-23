class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[sum]=i;
        }
       if(sum<x)return -1;
        int remsum=sum-x;
        sum=0;
        int longestsub=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int tofind=sum-remsum;
            if(mp.find(tofind)!=mp.end()){
                int idx=mp[tofind];
                longestsub=max(longestsub,i-idx);
            }
        }
        return longestsub==INT_MIN ? -1:(n-longestsub);
    }
};