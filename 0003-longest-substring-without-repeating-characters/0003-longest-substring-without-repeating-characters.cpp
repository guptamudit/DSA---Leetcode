class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        map<char, int> mp;
        int maxlen = 0;
        
        while(r < s.length()){
            if(mp.find(s[r]) != mp.end()){
                if(mp[s[r]] >= l){
                    l = mp[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxlen = max(maxlen, len);
            
            mp[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};
