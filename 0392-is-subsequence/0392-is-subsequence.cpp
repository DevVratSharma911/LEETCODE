class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
        int count=0;
        for(int i=0;i<t.size()&&l<s.size();i++){
            if(t[i]==s[l]){
                l++;
                count++;
            }
        }
        if(count==s.size())return true;
        return false;
        
    }
};