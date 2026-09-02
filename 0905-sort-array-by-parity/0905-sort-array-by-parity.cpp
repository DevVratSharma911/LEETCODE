class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums;
        int point=0;
        while(nums[point]%2==0 && point<n-1){
            point++;
        }
        
        for(int i=point;i<n;i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[point]);
                point++;
            }
        }
        return nums;
        
    }
};