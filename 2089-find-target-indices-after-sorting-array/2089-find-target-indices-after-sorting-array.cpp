class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>mp(101,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int cnt=-1;
        for(int i=0;i<=100;i++){
            if(mp[i]==0)continue;
            else{
                while(mp[i]>0){
                    cnt++;
                    if(i==target){
                        ans.push_back(cnt);
                    }
                    mp[i]--;
                }
                
            }
            
        }
        return ans;
    }
};