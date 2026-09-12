class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size() ;
        int maxcount=0;
        int value;
        unordered_set<int>mp;
        for(int i=0;i<n;i++){
            mp.insert(nums[i]);
        }
        for(int value:mp){
            int count=0;
            
            if(mp.find(value-1)!=mp.end())continue;
            while(mp.find(value)!=mp.end()){
                count++;
                value++;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
        
    }
};