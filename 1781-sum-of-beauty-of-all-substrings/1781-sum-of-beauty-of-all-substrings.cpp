class Solution {
public:
    int beauty(vector<int> count) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < 26; i++) {
            if (count[i] == 0) {
                continue;
            }
            maxi = max(maxi, count[i]);
            mini = min(mini, count[i]);
        }
        return maxi - mini;
    }

    int beautySum(string s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            vector<int> count(26, 0);
            for (int j = i; j < s.length(); j++) {
                count[s[j] - 'a']++;
                ans = ans + beauty(count);
            }
        }
        return ans;
    }

};