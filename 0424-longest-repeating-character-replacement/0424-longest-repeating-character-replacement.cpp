class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int Maxfre = 0;
        int ans = 0;
        map<char, int> mp;
        while (right < s.size()) {
            mp[s[right]]++;
            Maxfre = max(Maxfre, mp[s[right]]);
            int numReplacements = (right - left + 1) - Maxfre;
            if (numReplacements > k) {
                mp[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};