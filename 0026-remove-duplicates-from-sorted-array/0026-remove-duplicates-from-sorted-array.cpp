class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>mp;
        for(int x:nums)mp[x]=0;
        int pos=-1;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]++==0){
              swap(nums[++pos],nums[i]);
              count++;
                  }
        }
        return count;
    }
};