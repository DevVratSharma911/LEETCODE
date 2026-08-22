class Solution {
public:
    bool checkDivisibility(int n) {
        int check=n;
        int sum=0;
        int mulsum=1;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            mulsum*=digit;
            n=n/10;
        }
        if(check%(sum+mulsum)==0)return true;
        return false;
        
    }
};