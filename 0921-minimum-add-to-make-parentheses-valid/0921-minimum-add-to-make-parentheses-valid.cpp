class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int sum=0;
        int neg=0;
        for(char ch:s){
            if(ch=='(')sum++;
            else sum--;
            
            if(sum<0){
                
               neg++;
               sum=0;
            }
        }
        return abs(sum)+neg;
        
    }
};