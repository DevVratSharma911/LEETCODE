class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        double sum1=0;
        double sum2=0;
        for(int i=0;i<source.size();i++){
            sum1+=source[i];
            sum2+=target[i];
            
        }
if(sum1==sum2)return true;
        return false;
        
    }
};