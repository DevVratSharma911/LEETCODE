class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(cost1+cost2<=costBoth){
            return 1ll*need1*cost1+1ll*need2*cost2;
        }
        else{
            long long total=1ll*min(need1,need2)*costBoth;
            if(need1>need2){
                total+=1ll*min(cost1,costBoth)*(need1-need2);
                }
       
           else{
               total+=1ll*min(cost2,costBoth)*(need2-need1);
           }
           return total;
        }
        
        
        
    }
    
};