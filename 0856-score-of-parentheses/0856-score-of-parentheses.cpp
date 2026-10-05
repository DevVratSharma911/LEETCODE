class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        int open=1;
        
        int mainsum=0;
        for(int i=1;i<n;i++){
            if (s[i] == '(')
    open++;
else {
    if (s[i-1] == '(')
       mainsum+= 1 << (open - 1);

    open--;
}
        }
        
        return mainsum;
        
    }
};