class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long n=timeSeries.size();
        long long count=0;
        for(int i=1;i<n;i++){
           long long  gap=timeSeries[i]-timeSeries[i-1];
            if(gap<=duration)count+=duration-gap;
        }
        return (long long)(n*duration)-(count);
    }
};