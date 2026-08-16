class Solution {
public:
    bool isPalindrome(string s) {
        string sol="";
        for(char ch:s){
            if(isalnum(ch)){
                sol+=tolower(ch);
            }
            
        }
         int l=0, r=sol.size()-1;
        while(l<=r){
            if(sol[l]!=sol[r])return false;
            r--;
            l++;
        }
        return true;
    }
};