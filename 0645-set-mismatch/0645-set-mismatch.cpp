class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n=nums.size();
        long long sn=(n*(n+1))/2;
        long long sn2=(n*(n+1)*(2*n+1))/6;
        long long s=0,s2=0;
        for(int x:nums){
            s+=(long long)x;
            s2+=(long long)x*(long long)x;
        }
        long long val1=s-sn;
        long long val2=s2-sn2;
        val2=val2/val1;
        val1=(val1+val2)/2;
        val2=val2-val1;
        return{(int)val1,(int)val2};
    }
};