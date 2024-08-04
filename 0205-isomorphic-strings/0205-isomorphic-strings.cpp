class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,char>st;
        unordered_map<char,char>ts;
        for (int i = 0; i < s.length(); ++i) {
            char s1 = s[i];
            char t1 = t[i];
            if(st.find(s1) !=st.end())// mapping for s to t
            {
                if(st[s1]!=t1)
                {
                    return false;
                }
            }
            else
            {
            st[s1]=t1;
            }
            if(ts.find(t1) !=ts.end())// mapping for s to t
            {
                if(ts[t1]!=s1)
                {
                    return false;
                }
            }
            else
            {
            ts[t1]=s1;
            }

        }
        return true;
    }
};