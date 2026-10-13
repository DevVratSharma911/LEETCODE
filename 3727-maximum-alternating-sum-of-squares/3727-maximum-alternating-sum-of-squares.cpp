class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        int half=0;
        if(n%2==0)half=n/2;
        else half=n/2+1;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        while(half>0){
            if(abs(nums[i])>abs(nums[j])){
                sum+=(nums[i]*nums[i]);
                i++;
            }
            else{
                sum+=nums[j]*nums[j];
                j--;
            }
            half--;
        }
        while(i<=j){
            sum-=(nums[i]*nums[i]);
            i++;
        }
        return sum;
        
    }
};