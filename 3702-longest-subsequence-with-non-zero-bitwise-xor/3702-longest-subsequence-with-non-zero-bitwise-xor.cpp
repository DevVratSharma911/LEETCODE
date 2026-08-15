class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        bool nonzero=false;
        int Xor=0;
        for(int r=0;r<n;r++){
            
            Xor=nums[r]^Xor;
            if(nums[r] !=0)nonzero=true;
            }
            int tempxor=Xor;
            
            if(Xor!=0){
                return n;
                
            }
            if(nonzero)return n-1;
        
        return 0;
        
    }
};