class Solution {
public:
    int reverseDegree(string s) {
        int proSum=0;
        for(int i=0;i<s.size();i++){
            proSum+=(('z'-s[i]+1)*(i+1));
            
        }
        return proSum;
        
    }
};