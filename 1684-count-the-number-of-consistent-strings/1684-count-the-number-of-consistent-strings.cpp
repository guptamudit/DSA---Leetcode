class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
        bool alphabet[26] = {};
        
        for (char c: allowed){
            alphabet[c - 'a'] = true;
        }
        
        for (string word: words) {
            
            for (char c: word){
               if (!alphabet[c - 'a']) {
                    res--;
                    break;
                } 
            } 
        }
        return res;
    }
};