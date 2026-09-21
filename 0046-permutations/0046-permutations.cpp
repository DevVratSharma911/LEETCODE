class Solution {
public:
    vector<int>nextperm(vector<int>temp){
        int idx=-1;
        int n=temp.size();
        for(int i=n-2;i>=0;i--){
            if(temp[i]<temp[i+1]){
                idx=i;
                break;
            }
        }
        if(idx<0){
             reverse(temp.begin(),temp.end());
             return temp;
        }
        for(int i=n-1;i>idx;i--){
            if(temp[i]>temp[idx]){
                swap(temp[i],temp[idx]);
                break;
            }
        }
        reverse(temp.begin()+idx+1,temp.end());
        return temp;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>sol{nums};
        vector<int>temp=nextperm(nums);
        while(temp!=sol[0]){
            sol.push_back(temp);
            temp=nextperm(temp);
        }
        return sol;
        
        
        
    }
};