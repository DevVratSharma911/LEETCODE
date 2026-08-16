class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long rev=0;
        long long compare=x;
        while(x>0){
            int digit=x%10;
            rev=1ll*rev*10+digit;
            x/=10;
        }
        if(rev==compare)return true;
        return false;
    }
};