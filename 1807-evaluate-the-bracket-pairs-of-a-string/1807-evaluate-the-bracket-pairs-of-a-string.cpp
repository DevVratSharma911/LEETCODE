class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge [i][1];
        }
        int i=0;
        string res="";
        while(i<s.size()){
            if(s[i]== '(' ){
                string temp="";
                i++;
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                if(mp.find(temp)!=mp.end()){
                    res+=mp[temp];
                }
                else res+='?';
                
                
            }
            else res+=s[i];
            i++;
        }
        return res;
    }
};