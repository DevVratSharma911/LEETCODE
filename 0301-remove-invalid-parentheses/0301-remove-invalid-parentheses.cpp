class Solution {
public:
    int n;
    int maxsize = 0;
    unordered_set<string> st;
    void solve(const string& s, string& curr, int i, int n, int cnt) {
        if (cnt < 0)
            return;
        if (i == n) {
            if (cnt == 0) {
                if (maxsize < curr.size()) {
                    maxsize = curr.size();
                    st.clear();
                }
                if (maxsize == curr.size()) {
                    st.insert(curr);
                }
            }
            return;
        }
        if (s[i] != '(' && s[i] != ')') {
            curr.push_back(s[i]);
            solve(s, curr, i + 1, n, cnt);
            curr.pop_back();
            return;
        }
        curr.push_back(s[i]);
        solve(s, curr, i + 1, n, cnt + (s[i] == '(' ? 1 : -1));
        curr.pop_back();
        solve(s, curr, i + 1, n, cnt);
    }
    vector<string> removeInvalidParentheses(string s) {

        n = s.size();
        st.clear();
        string curr = "";
        solve(s, curr, 0, n, 0);
        return (vector<string>(st.begin(), st.end()));
    }
};