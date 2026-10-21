class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int mn=INT_MAX;
        int idx1=0;
        int idx2=0;
        int mx=INT_MIN;
        bool sorted=true;
        for(int i=0;i<n;i++){
            if(i!=0 && s[i]<s[i-1]){
                
                sorted=false;
            }
            if(s[i]-'a'!=mn&&s[i]-'a'<mn){
                mn=s[i]-'a';
                idx1=i;
                
                
            }
            if(s[i]-'a'>=mx){
                mx=s[i]-'a';
                idx2=i;
            }
        }
        if(sorted)return 0;
        if(n==2)return -1;
        if(idx1==0||idx2==n-1)return 1;
        if(idx1==n-1&&idx2==0)return 3;
        return 2;
        
        
    }
};