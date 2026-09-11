class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10);
        int res=0;
        for(int i=0;i<=9;i++){
            if(i==digits.size())break;
            freq[digits[i]]++;
        }
        for(int i=1;i<=9;i++){
            if(freq[i]==0)continue;
            freq[i]--;
            
            for(int j=0;j<=9;j++){
                if(freq[j]==0)continue;
                freq[j]--;
                for(int k=0;k<=8;k+=2){
                    if(freq[k]==0)continue;
                    freq[k]--;
                    res++;
                    freq[k]++;
                    
                    
                }
                freq[j]++;
            }
            freq[i]++;
        }
        return res;
    }
};