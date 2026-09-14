class Solution {
public:
    vector<vector<int>> generate(int row) {
        vector<vector<int>>sol;
        for(int i=0;i<row;i++){
            vector<int>temp;
            for(int j=0;j<=i;j++){
                if(j==0){
                    temp.push_back(1);
                }
                else if(j==i){
                    temp.push_back(1);
                    break;
                }
                else{
                    temp.push_back(sol[i-1][j]+sol[i-1][j-1]);
                }
                
            }
            sol.push_back(temp);
        }
        return sol;
        
    }
};