class Solution {
public:
    int countCommas(int n) {
        int temp=n;
        int digit=0;
        while(n>0){
            digit++;
            n/=10;
        }
        if(digit<4)return 0;
        else return temp-1000+1;
        
    }
};