class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string word = "";
        unordered_map<string, int> mpp;
        
        string wholeWord = s1 + " " + s2;
        
        for(auto ch : wholeWord){
            if(ch == ' '){
                if(!word.empty()){
                    mpp[word]++;
                    word = "";
                }
            }else{
                word += ch;
            }
        }
        
        if(!word.empty()){
            mpp[word]++;
        }
        
        vector<string> result;
        for(auto it : mpp){
            if(it.second == 1){
                result.push_back(it.first);
            }
        }
        
        return result;
    }
};