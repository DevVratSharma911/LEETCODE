class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>score;
        int i=-1;
        int sum=0;
        for(string ch:operations){
            if(ch=="C"){
                sum-=score[i];
                score.pop_back();
                i--;
            }
            else if(ch=="+"){
                score.push_back(score[i]+score[i-1]);
                i++;
                sum+=score[i];
            }
            else if(ch=="D"){
                score.push_back(score[i]*2);
                i++;
                sum+=score[i];
            }
            else{
                score.push_back(stoi(ch));
                i++;
                sum+=score[i];
            }
        }
        return sum;
        
    }
};