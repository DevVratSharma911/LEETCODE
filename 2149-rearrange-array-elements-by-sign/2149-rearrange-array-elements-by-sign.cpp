class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size());
        int idx1=0, idx2=1;
        for(int x:nums){
         if(x>0){
             res[idx1]=x;
             idx1+=2;
         }
         else{
             res[idx2]=x;
             idx2+=2;
         }
        }
        return res;
        
        
    }
};