class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count=0;
        long long mx1=INT_MIN;
        long long mx2=INT_MIN;
        long long mx3=INT_MIN;
        for(int x:nums){
            if(x>mx1 || (count<1 && x==mx1)){
                mx3=mx2;
                mx2=mx1;
                mx1=x;
                count++;
            }
            else if(x>mx2  && x!=mx1 ||(x==mx2 && count<2 && x!=mx1)){
                mx3=mx2;
                mx2=x;
                count++;
            }
            else if((x>mx3 && x!=mx1 && x!=mx2)||(x==mx3 && count<3 && x!=mx1 && mx2!=x)){
                mx3=x;
                 count++;
            }
        }
        if(count<3)return mx1 ;
        return mx3;
        
    }
};