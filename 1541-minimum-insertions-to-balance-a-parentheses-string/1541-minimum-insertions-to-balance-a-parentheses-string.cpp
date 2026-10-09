class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int cnt=0;
        int extra=0;
        int close=0;
        int i=0;
        while(i<n){
            if(s[i]=='('){
                cnt++;
                i++;
            }
            else{
                if((i!=n-1)&&s[i+1]==')'){
                   cnt--;
                   i+=2; 
                }
                else{
                    cnt--;
                    extra++;
                    i++;
                }
                
            }
            if(cnt<0){
                    close++;
                    cnt=0;
                }
        }
        return cnt*2+extra+close;
        
    }
};