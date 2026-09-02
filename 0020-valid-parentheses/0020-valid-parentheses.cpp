class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp;
        for(char ch:s ){
            if(ch=='(')mp['(']=')';
            else if(ch=='{')mp['{']='}';
            else if(ch=='[')mp['[']=']';
        }
        stack<char>st;
        for(char ch:s){
            if(ch=='(' || ch=='{' ||ch=='[')st.push(ch);
            else if( ch==')' || ch=='}' ||ch==']'){
                if(st.empty())return false;
                char x=st.top();
                st.pop() ;
              
              if(mp[x]!=ch)return false;
              }
            
        }
        if(st.empty())return true;
        return false;
        
    }
};