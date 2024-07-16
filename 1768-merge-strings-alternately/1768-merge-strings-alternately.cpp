class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        stringstream ss;
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            ss << word1[i++] << word2[j++];
        }

        while (i < word1.length()) {
            ss << word1[i++];
        }

        while (j < word2.length()) {
            ss << word2[j++];
        }

        return ss.str();
    }
};