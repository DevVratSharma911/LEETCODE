class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        unordered_map<int,int>mp;
        for(char ch:s){
            mp[ch]=0;
        }
        int c=1;
        while(r<n){
            int c2=0;
            mp[s[r]]++;
            if(mp[s[r]]<=2){
                
                c2=r-l;
                
            }
            else {
                while(mp[s[r]]>2){
                    mp[s[l]]--;
                    l++;
                    c2=r-l;
                }
                
            }
            r++;
            c=max(c, c2);
            
        }
        return c+1;
    }
};