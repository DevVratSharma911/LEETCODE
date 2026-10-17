class Solution {
public:
    int digitsum(int num1){
        int sum=0;
        while(num1>0){
            sum+=(num1%10);
            num1=num1/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        vector<int>aftersort(nums.begin(), nums.end());
        int n=nums.size();
        int swaps=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[nums[i]]=i;
        
        auto lambda=[&](int num1,int num2){
            int num1digsum=digitsum(num1);
            int num2digsum=digitsum(num2);
            if(num1digsum!=num2digsum){
                return num1digsum<num2digsum;
            }
            return num1<num2;
        };
        sort(aftersort.begin(),aftersort.end(),lambda);
        
        for(int i=0;i<n;i++){
            int expected=aftersort[i];
            int curr=nums[i];
            if(curr==expected)continue;
            int idx=mp[expected];
            nums[i]=expected;
            nums[idx]=curr;
            mp[expected]=i;
            mp[curr]=idx;
            swaps++;
            
            
        }
        return swaps;
    }
};