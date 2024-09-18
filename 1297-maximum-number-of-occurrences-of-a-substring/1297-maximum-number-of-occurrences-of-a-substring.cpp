class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string, int> substringCount;
        unordered_map<char, int> charCount;
        int maxFreq = 0;
        
        for (int i = 0; i <= s.size() - minSize; ++i) {
            string sub = s.substr(i, minSize);
            charCount.clear();
            
            for (char c : sub) charCount[c]++;
            
            if (charCount.size() <= maxLetters) {
                substringCount[sub]++;
                maxFreq = max(maxFreq, substringCount[sub]);
            }
        }
        
        return maxFreq;
    }
};