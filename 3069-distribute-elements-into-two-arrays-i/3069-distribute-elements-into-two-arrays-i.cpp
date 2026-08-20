class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        v1.push_back(nums[0]);
        int n1=1, n2=1;
        v2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(v1[n1-1]>v2[n2-1]){
                v1.push_back(nums[i]);
                n1++;
            }
            else{
                v2.push_back(nums[i]);
                n2++;
            }
        }
        for(int i=0;i<n2;i++){
            v1.push_back(v2[i]);
       }
       return v1;
        
    }
};