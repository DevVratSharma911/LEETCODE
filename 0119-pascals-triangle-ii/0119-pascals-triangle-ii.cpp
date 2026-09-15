class Solution {
public:
    vector<int> getRow(int row) {
       
        vector<int>prev(row);
        for(int i=0;i<=row;i++){
            vector<int>curr(i+1,1);
            for(int j=1;j<i;j++){
                curr[j]=prev[j-1]+prev[j];
                
                
            }
            prev=curr;
        }
        return prev;
        
    }
};