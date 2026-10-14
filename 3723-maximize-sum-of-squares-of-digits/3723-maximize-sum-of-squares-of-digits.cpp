class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int mxsum=9*num;
        if(mxsum<sum)return "";
        int nines=sum/9;
        int rem=sum-nines*9;
        if(num==1){
            if(nines==0){
                return to_string(rem);
            }
            else return "9";

        }
        int extra=num-nines-1;
        if(extra<0)extra=0;
        string need(extra, '0');
        string nine(nines,'9');
        if(nines==num)return nine;
        return nine+to_string(rem)+need;
        
    }
};