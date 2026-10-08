class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')cnt++;
            else cnt--;
            if((s[i]=='('&&cnt==1)||(s[i]==')'&&cnt==0))continue;
            else ans+=s[i];
        }
        return ans;
        
        
    }
};