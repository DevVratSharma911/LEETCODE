class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        
        int n=nums.size();
        long long add=0;
        long long base=0;
        int counter=0;
        for(int i=0;i<n;i++){
     
            add=add+nums[i];
            base=base+(nums[i]*counter);
            counter++;
        }
        long long maxsum=base;
        long long diff=0;
        for(int i=1;i<n;i++){
            diff=diff+(1ll*n*nums[n-i]);
            long long sum=base+ 1ll *i*add-diff;
            if(sum>maxsum)maxsum=sum;
        }
        
        return maxsum;
    }
};