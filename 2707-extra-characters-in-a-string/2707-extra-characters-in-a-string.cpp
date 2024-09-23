class Solution {
public:
    unordered_set<string> st;
    int dp[52];
    int solve(string& s, int i) {
        if (i == s.length()) return 0;
        if (dp[i] != -1) return dp[i];

        int ans = 1 + solve(s, i + 1);
        string temp = "";
        
        for (int j = i;j < s.length();j ++) {
            temp += s[j];
            if (st.find(temp) != st.end()) ans = min(ans, solve(s, j + 1));
        }
        
        return dp[i] = ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        for (const auto & word: dictionary) {
            st.insert(word);
        }

        memset(dp, -1, sizeof(dp));

        return solve(s, 0);
    }
};