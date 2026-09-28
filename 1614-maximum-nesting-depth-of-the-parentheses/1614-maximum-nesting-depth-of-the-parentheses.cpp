class Solution {
public:
    int maxDepth(string s) {
        int mxcnt =0;
        int cnt=0;
        for(char ch:s){
            if(ch=='(')cnt++;
            else if(ch==')')cnt--;
            mxcnt=max(mxcnt,cnt);
            }
        return mxcnt;  
    }
};