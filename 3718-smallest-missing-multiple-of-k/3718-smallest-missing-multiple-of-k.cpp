class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int add=k;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            if(x==k){
                k=k+add;
            }
        }
        return k;
    }
};