class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallest=INT_MAX;
        int odds=0;
        
        for(int x:nums1){
            if(x%2!=0)odds++;
            if(x<smallest)smallest=x;
        }
        if(smallest%2!=0)return true;
        if(odds==0)return true;
        return false;
        
        
    }
};