class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>freq;
         vector<int>res;
        for(int x:nums1)freq[x]++;
        for(int y:nums2){
           if(freq[y]>0){
             res.push_back(y);
              freq[y]--;
           }
        }
        return res;
        
    }
};