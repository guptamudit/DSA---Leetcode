class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int l = 0, r = 0, minlen = INT_MAX, start = 0;
        int n = s.length(), m = t.length(), count = 0;

        // Count frequency of characters in t
        for (char c : t) {
            mp[c]++;
        }

        while (r < n) {
            // If the current character is in t, decrease its frequency
            if (mp.count(s[r]) > 0) {
                mp[s[r]]--;
                if (mp[s[r]] >= 0) { // Only count if frequency becomes non-negative
                    count++;
                }
            }

            // If we have found a valid window
            while (count == m) {
                // Update minimum window if necessary
                if (minlen > r - l + 1) {
                    minlen = r - l + 1;
                    start = l;
                }

                // Shrink the window
                if (mp.count(s[l]) > 0) {
                    mp[s[l]]++;
                    if (mp[s[l]] > 0) { // Only decrease count if frequency becomes positive
                        count--;
                    }
                }
                l++;
            }
            r++;
        }

        return minlen == INT_MAX ? "" : s.substr(start, minlen);
    }
};
