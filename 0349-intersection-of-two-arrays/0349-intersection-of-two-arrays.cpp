class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp1;
        unordered_map<int,int>mp2;
        vector<int>mp;
        for(int x : nums1)mp1[x]++;
        for(int y : nums2){
            if(mp1.find(y)!=mp1.end()&&mp2.find(y)==mp2.end()){
                mp.push_back(y);
                mp2[y]++;
            }
       }
       return mp;
        
        
        
    }
};