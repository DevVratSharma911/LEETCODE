class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++){
            int current=prices[i]-min;
            if(current>profit)profit=current;
            if(prices[i]<min)min=prices[i];
        }
        return profit;
    }
    
};