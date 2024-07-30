class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r;

        for(auto i : magazine)
        {
            r[i]++;
        }

        for(char c : ransomNote)
        {
            if(r.find(c)!=r.end() && r[c]>0)
                r[c]--;
            else
                return false;
        }

        return true;
    }
};