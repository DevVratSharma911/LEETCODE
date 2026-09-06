class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int r = 0;
        int count = 0;

        for(int i = 0; i < g.size(); i++) {

            while(r < s.size() && s[r] < g[i]) {
                r++;
            }

            if(r < s.size()) {
                count++;
                r++;
            }
        }

        return count;
    }
};